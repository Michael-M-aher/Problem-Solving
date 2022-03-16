#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int t;
    cin >> t;
    while (t--) {
        int n,k;cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        for (int i = 0; i < n; ++i) {
            while(v[i]!=0&&k>0){
                v[i]--;
                v[n-1]++;
                k--;
            }
        }
        for (auto i:v) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}