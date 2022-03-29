#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
bool check(vector<ll>v,ll k,ll num){
    for (int i = v.size()/2; i < v.size(); ++i) {
        if(v[i]<num){
            k-= num-v[i];
        }
    }
    if(k<0)
        return false;
    return true;
}

int main() {
    FIO
    ll n,k;
    cin >> n>>k;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll st=v[n/2],en=2e9;
    while(st<=en){
        ll mid =(st+en)/2;
        if(check(v,k,mid)){
            st =mid+1;
        }else{
            en =mid-1;
        }
    }
    cout<<st-1;
    return 0;
}