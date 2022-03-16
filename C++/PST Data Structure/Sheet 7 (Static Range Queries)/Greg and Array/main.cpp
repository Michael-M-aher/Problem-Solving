#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int arr[N],c[N],l[N],r[N],d[N];
ll s[N];

int main() {
    FIO
    int n,m,k;cin >> n>>m>>k;
    for (int i = 1; i <= n; ++i) {
        cin>>arr[i];
    }
    for (int i = 1; i <= m; ++i) {
        cin>>l[i]>>r[i]>>d[i];
    }
    for (int i = 0; i < k; ++i) {
        int x,y;cin>>x>>y;
        c[x]++;c[y+1]--;
    }
    for (int i = 1; i <= m; ++i) {
        c[i]+=c[i-1];
        s[l[i]]+=(1ll*d[i]*c[i]);
        s[r[i]+1]-=(1ll*d[i]*c[i]);
    }

    for (int i = 1; i <= n; ++i) {
        s[i]+=s[i-1];
        cout<<arr[i]+s[i]<<" ";
    }
    return 0;
}