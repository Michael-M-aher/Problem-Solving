#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
int t,n;
vector<int> v,ans;
set<vector<int>> st;

void solve(int idx,int sum){
    if(idx == n){
        if(sum == t){
            st.insert(ans);
        }
        return;
    }
    ans.push_back(v[idx]);
    solve(idx+1,sum +v[idx]);
    ans.pop_back();
    solve(idx+1,sum);
}
int main() {
    FIO
    while (true) {
        v.clear();
        ans.clear();
        st.clear();
        cin >>t>>n;
        if(n==0) {break;}
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());
        solve(0,0);
        cout<<"Sums of "<<t<<":\n";
        if(st.empty()){
            cout<<"NONE\n";
            continue;
        }
        auto vec = st.rbegin();
        for ( ;vec!= st.rend();vec++) {
            for (int i = 0; i < (*vec).size(); ++i) {
                cout<<(*vec)[i]<<((i==(*vec).size()-1)?"":"+");
            }
            cout<<"\n";
        }
    }
    return 0;
}