#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,ans=0;cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i < (1<<n); ++i) {
        bool less = true;
        vector<int> va;
        for (int j = 0; j < n; ++j) {
            if(1&(i>>j)){
                va.push_back(v[j]);
            }
        }
        for (int k=1;k<va.size();++k) {
            if(!(va[k-1]<va[k])){
                less = false;
                break;
            }
        }
        if(less){
            int c =va.size();
            ans = max(ans,c);
        }
    }
    cout<<ans<<"\n";
    return 0;
}