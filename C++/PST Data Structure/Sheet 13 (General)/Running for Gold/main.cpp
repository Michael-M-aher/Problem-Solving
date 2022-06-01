#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

struct Rk{
    int r[5];
    bool operator<(const Rk rnk){
        int cnt = 0;
        for (int i = 0; i < 5; ++i) {
            if (r[i]<rnk.r[i])
                cnt++;
        }
        return (cnt >=3);
    }
};
int main() {
    FIO
    int t;cin >> t;
    while (t--) {
        int n;cin>>n;
        vector<Rk> v(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin>>v[i].r[j];
            }
        }
        int ans = 0;
        for (int i = 1; i < n; ++i) {
            if(v[i]<v[ans]){
                ans = i;
            }
        }
        bool t= false;
        for (int i = 0; i < n; ++i) {
            if(i!=ans && v[i]<v[ans]){
                t= true;
            }
        }
        cout<<(t?-1:ans+1)<<"\n";

    }
    return 0;
}