#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int t;cin>>t;
    for (int k = 0; k <t; ++k) {
        cout<<"Case #"<<k+1<<":\n";
        int r,c;
        cin >> r>>c;
        for (int i = 0; i < 2*r+1; ++i) {
            if(i%2==0){
                if(i==0){
                    cout<<"..";
                    for (int j = 0; j < c-1; ++j) {
                        cout<<"+-";
                    }
                    cout<<"+\n";
                }else{
                    for (int j = 0; j < c; ++j) {
                        cout<<"+-";
                    }
                    cout<<"+\n";
                }
            }else{
                if(i==1){
                    cout<<"..";
                    for (int j = 0; j < c-1; ++j) {
                        cout << "|.";
                    }
                    cout << "|\n";
                }else {
                    for (int j = 0; j < c; ++j) {
                        cout << "|.";
                    }
                    cout << "|\n";
                }
            }
        }
    }
    return 0;
}