#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n, r;
    ll avg,sum=0,ans=0;
    cin >> n>> r>>avg;
    vector<pair<ll,ll>> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i].second>>v[i].first;
        sum+=v[i].second;
    }
    ll rem = avg*n - sum;
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i) {
        ll dif = r - v[i].second;
        if(rem>0){
            ll tmp = min(rem,dif);
            v[i].second+=tmp;
            ans+=v[i].first*tmp;
            rem-= tmp;
        }
    }
    cout<<ans;
    return 0;
}