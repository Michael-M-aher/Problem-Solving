#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;


//Vector that carry the Sudoku Grid
vector<vector<char>> v(9,vector<char>(9,'.'));

//Array that contains the valid numbers
char nums[9]={'1','2','3','4','5','6','7','8','9'};

//Check if the num is in the Row
bool InRow(char num,int row){
    for (int i = 0; i < 9; ++i) {
        if(num == v[row][i]){
            return true;
        }
    }
    return false;
}

//Check if the num is in the Column
bool InCol(char num , int col){
    for (int i = 0; i < 9; ++i) {
        if(num == v[i][col]){
            return true;
        }
    }
    return false;
}

//Check if the num is in the 3X3 Square
bool InSquare(char num,int stcol,int strow){
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            if(num==v[row+strow][col+stcol]){
                return true;
            }
        }
    }
    return false;
}

//Check if the num is Valid
bool isValid(char num , int row, int col){
    return (!InRow(num,row)&&!InCol(num,col)&&!InSquare(num,(col-col%3),(row-row%3)));
}

//Find empty space and return its index
bool FindEmpty(int &row,int &col){
    for (row = 0; row < 9; ++row) {
        for (col = 0; col < 9; ++col) {
            if(v[row][col]=='.'){
                return true;
            }
        }
    }
    return false;
}

//Solve the Grid using backtracking and print the answer
bool solve(){
    int row,col;
    if(!FindEmpty(row,col))
        return true;
    for (auto i:nums) {
        if(isValid(i,row,col)){
            v[row][col] = i;
            if(solve())
                return true;
            v[row][col] = '.';
        }
    }
    return false;
}

//Take the sudoku grid as input
void InputGrid(){
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin>>v[i][j];
        }
    }
}

//Print the sudoku grid
void PrintGrid(){
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout<<(j%3==0&&j!=0?"| ":"")<<v[i][j]<<" ";
        }
        cout<<((i+1)%3==0&&i!=8?"\n------|-------|------\n":"\n");
    }
}

int main() {
    FIO
    InputGrid();
    if(solve()){
        cout<<"\nSolution :\n";
        PrintGrid();
    }else{
        cout<<"No Solution found .\n";
    }
    return 0;
}