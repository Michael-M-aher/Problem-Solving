#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    int ans=0;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(v[(v.size()+1)/2-1]!=k){
        v.push_back(k);
        ans++;
        sort(v.begin(),v.end());
    }
    cout<<ans;
    return 0;
}