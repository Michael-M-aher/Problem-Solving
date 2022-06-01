#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n, r, avg,sum=0,ans=0;
    cin >> n>> r>>avg;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i].second>>v[i].first;
        sum+=v[i].second;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i) {
        while(sum<avg*n){
            if(v[i].second<=r){
                v[i].second++;
                ans++;
                sum++;
            }
        }
    }
    cout<<ans;
    return 0;
}