#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int t;cin >> t;
    for (int i = 0; i < t; ++i) {
        cout<<"Case #"<<i+1<<": ";
        int arr[3][4],anss[4],total =0;
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                cin>>arr[j][k];
            }
        }
        for (int j = 0; j < 4; ++j) {
            int mn = min(arr[0][j], min(arr[1][j],arr[2][j]));
            anss[j] = mn;
            total+=mn;
        }
        if(total>=1000000){
            int rem = total - 1000000;
            for (int j = 0; j < 4; ++j) {
                if (anss[j] >rem){
                    anss[j]-=rem;
                    break;
                }else{
                    rem-= anss[j];
                    anss[j]=0;
                }
            }
            for (int j = 0; j < 4; ++j) {
                cout<<anss[j]<<" ";
            }
            cout<<"\n";
        }else{
            cout<<"IMPOSSIBLE\n";
        }

    }
    return 0;
}