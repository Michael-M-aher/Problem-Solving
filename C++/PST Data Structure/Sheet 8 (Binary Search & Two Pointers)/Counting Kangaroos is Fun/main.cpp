#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n;cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int st=0,en=n/2;
    int ans=0;
    while (st<n/2&&en<n){
        if(v[en]>=v[st]*2){
            ans++;st++;en++;
        }else{
            en++;
        }
    }
    cout<<n-ans;
    return 0;
}