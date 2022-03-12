#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
vector<vector<char>> v(9,vector<char>(9,'.'));
vector<vector<int>> msk(9,vector<int>(9,0));
int nums[9]={1,2,3,4,5,6,7,8,9};


void solveRow(int row,int col){
    if(row==9){
        for (auto i:v) {
            for (auto j:i) {
                cout<<j<<" ";
            }
            cout<<"\n";
        }
    }
    if(col >= 9){
        solveRow(row+1,0);
    }
        cout<<"r"<<row<<"col"<<col<<endl;
    if(v[row][col] == '.') {
        for (auto i:nums) {
            if(msk[row][i-1]==0){
                bool found = false;
                for (int j = 0; j < 9; ++j) {
                    if(v[j][col]==(char)i){
                        found = true;
                    }
                }
                if(!found){
                    v[row][col] = (char)i;
                    msk[row][i-1]=1;
                    solveRow(row,col+1);
                    msk[row][i-1]=0;
                }
            }
        }
    }else {
        solveRow(row,col+1);
    }

}

int main() {
    FIO
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char x;cin>>x;
            if(x != '.'){
                msk[i][(x-'0')-1]=1;
            }
            v[i][j]=x;
        }
    }

    solveRow(0,0);
    return 0;
}