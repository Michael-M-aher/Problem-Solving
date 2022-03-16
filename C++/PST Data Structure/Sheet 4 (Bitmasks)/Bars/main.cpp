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
    while (t--) {
        int num,n;cin>>num>>n;
        bool tt = true;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        for (int i = 0; i < (1<<n); ++i) {
            int ans = 0;
            for (int j = 0; j < n; ++j) {
                if(1 & (i>>j)){
                    ans+=v[j];
                }
            }
            if(ans==num){
                cout<<"YES\n";
                tt = false;
                break;
            }
        }
        if(tt){
            cout<<"NO\n";
        }
    }
    return 0;
}