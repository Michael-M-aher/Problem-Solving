#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
ll acc[N];
vector<ll> v;

int main() {
    FIO
    int n;cin >> n;
    v.push_back(0);
    for (int i = 1; i <= n; ++i) {
        ll x;cin>>x;
        acc[i]=x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i = 1; i <= n; ++i) {
        acc[i]+=acc[i-1];
        v[i]+=v[i-1];
    }
    int q;cin>>q;
    while (q--){
        int typ,l,r;cin>>typ>>l>>r;
        if(typ==1){
            cout<<((l>0)?acc[r]-acc[l-1]:acc[r])<<"\n";
        }else{
            cout<<((l>0)?v[r]-v[l-1]:v[r])<<"\n";
        }
    }
    return 0;
}