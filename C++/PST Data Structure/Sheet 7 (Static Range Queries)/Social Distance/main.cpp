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
        int n,k;string str;cin>>n>>k>>str;
        set<int> st;
        for (int i = 0; i < n; ++i) {
            if(str[i]=='1'){
                st.insert(i);
            }
        }
        int ans=0;
        for (int i = 0; i < n; ++i) {
            if(str[i]=='1'){
                continue;
            }
            auto it = st.upper_bound(i);
            if(it!=st.end()){
                if(*it-i<=k){
                    continue;
                }
            }
            if(it!=st.begin()){
                it--;
                if(i-*it<=k){
                    continue;
                }
            }
            ans++;
            st.insert(i);
        }
        cout<<ans<<"\n";
    }
    return 0;
}