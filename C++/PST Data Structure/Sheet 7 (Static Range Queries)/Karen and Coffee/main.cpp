#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 200005;
const int mod = 1e9 + 7;
int acc[N],ans[N];

int main() {
    FIO
    int n,k,q;
    cin >> n>>k>>q;
    for (int i = 0; i < n; ++i) {
        int l,r;cin>>l>>r;
        acc[l]++;acc[r+1]--;
    }
    for (int i = 1; i <= 200000; ++i) {
        acc[i]+=acc[i-1];
        ans[i] = ans[i-1]+(acc[i]>=k);
    }
    while (q--){
        int l,r;cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<"\n";
    }
    return 0;
}
