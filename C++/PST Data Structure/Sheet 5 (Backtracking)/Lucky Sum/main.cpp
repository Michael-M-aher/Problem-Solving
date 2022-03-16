#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
const ll m = 1e10;
set<ll> st;
void next(ll lst){
    if(lst>m){
        return ;
    }
    if(lst>0)
        st.insert(lst);
    next(lst*10+4);
    next(lst*10+7);
}
int main() {
    FIO
    ll l,r;
    ll sum=0;
    cin >>l>>r;
    next(0);
    while(l<=r){
        ll i= *st.lower_bound(l);
        sum+=i*(min(i,r)-l+1);
        l = i+1;
    }
    cout<<sum;

    return 0;
}