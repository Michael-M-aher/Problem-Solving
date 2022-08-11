List<List<int>> grid = [[5,0,2,0,0,0,0,7,0],
                        [4,9,3,0,5,8,6,0,0],
                        [7,0,8,0,0,0,0,0,9],
                        [0,8,0,4,0,0,0,2,0],
                        [0,0,1,0,3,0,0,0,4],
                        [9,7,4,0,1,0,0,8,0],
                        [1,0,0,5,0,0,2,0,7],
                        [2,4,6,9,0,0,8,3,0],
                        [8,5,7,0,2,6,9,0,1],
                       ];
var grow = [];
var gcol = [];

bool inRow(int num,int row){
  for(int i=0;i<9;++i){
    if(num==grid[row][i]){
      return true;
    }
  }
  return false;
}

bool inCol(int num,int col){
  for(int i=0;i<9;++i){
    if(num==grid[i][col]){
      return true;
    }
  }
  return false;
}
bool inSquare(int num,int strow,int stcol){
  for(int i=0;i<3;++i){
    for(int j=0;j<3;++j){
      if(num==grid[strow+i][stcol+j]){
        return true;
      }
    }
  }
  return false;
}
bool isValid(int num,int row,int col){
  return (!inRow(num,row)&&!inCol(num,col)&&!inSquare(num,(row-row%3),(col-col%3)));
}

bool findEmpty(){
  for(int i=0;i<9;++i){
    for(int j=0;j<9;++j){
      if(grid[i][j]==0){
        grow.add(i);
        gcol.add(j);
        return true;
      }
    }
  }
  return false;
}

bool solve(){
  if(!findEmpty()){
    return true;
  }
  for(int i=1;i<=9;++i){
    if(isValid(i,grow.last,gcol.last)){
      grid[grow.last][gcol.last]=i;
      if(solve()){
        return true;
      }
      grid[grow.last][gcol.last]=0;
      grow.removeLast();
      gcol.removeLast();
    }
  }
  return false;
}

void main() {
  if(solve()){
    print(grid);
  }else{
    print("no sol");
  }
}
