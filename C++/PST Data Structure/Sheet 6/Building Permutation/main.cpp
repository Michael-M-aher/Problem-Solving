#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    ll n,sum=0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i) {
        ll diff = v[i]-(i+1);
        if(diff<0){
            sum -= diff;
        }else{
            sum+= diff;
        }
    }
    cout<<sum;
    return 0;
}