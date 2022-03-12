#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,q,k;cin >> n>>k>>q;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    for (int i = 0; i < q; ++i) {
        int a,b;
        cin>>a>>b;
    }
    return 0;
}