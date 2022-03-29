#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 2e9 + 5;
const int mod = 1e9 + 7;

bool check(vector<ll> a,vector<ll> b,ll num,ll k){
    for (int i = 0; i < a.size(); ++i) {
        ll need = num*a[i];
        if(b[i]>=need){
            continue;
        }
        need -= b[i];
        if(k<need){
            return false;
        }
        k-=need;
    }
    return true;
}

int main() {
    FIO
    ll n,k;
    cin >>n>>k;
    vector<ll> a(n),b(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }
    ll st=0,en=N;
    while (st<=en){
        ll mid = (st+en)/2;
        if(check(a,b,mid,k)){
            st = mid+1;
        }else{
            en = mid-1;
        }
    }
    cout<<st-1<<"\n";
    return 0;
}