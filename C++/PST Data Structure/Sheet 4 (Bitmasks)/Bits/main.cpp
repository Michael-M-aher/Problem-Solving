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
        ll l,r;cin>>l>>r;
        ll ans=l;
        for (int i = 0; i < 60; ++i) {
            if((ans|(1LL<<i))<=r){
                ans|=(1LL<<i);
            }else{
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}