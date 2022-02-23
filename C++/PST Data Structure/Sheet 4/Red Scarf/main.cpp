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
    int t=0;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
        t^=v[i];
    }
    for (int i = 0; i < n; ++i) {
        int ans =t^v[i];
        cout<<ans<<" ";
    }
    return 0;
}