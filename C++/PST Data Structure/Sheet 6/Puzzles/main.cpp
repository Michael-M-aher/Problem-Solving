#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,m,mn=1e9;
    cin >> n>>m;
    vector<int> v(m);
    for (int i = 0; i < m; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i <= m - n; ++i) {
        int nxtidx = i+n-1;
        mn=min(mn,v[nxtidx]-v[i]);
    }
    cout<<mn;
    return 0;
}