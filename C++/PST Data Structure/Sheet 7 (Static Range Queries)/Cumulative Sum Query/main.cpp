#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int acc[N];

int main() {
    FIO
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin>>acc[i];
    }
    for (int i = 1; i < n; ++i) {
        acc[i]+=acc[i-1];
    }
    int q;cin>>q;
    for (int i = 0; i < q; ++i) {
        int x,y;cin>>x>>y;
        cout<<((x>0)?acc[y]-acc[x-1]:acc[y])<<"\n";
    }
    return 0;
}