#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

//const int N = 1e3 + 5;
const int mod = 1e9 + 7;
int N,n,mx=0;
vector<int> v,ans,bans;
void solve(int pos,int sum){
    if(pos == v.size()){
        if(sum<=N&&sum>mx){
            bans.clear();
            mx = sum;
            for(auto i:ans){
                bans.push_back(i);
            }
        }
        return;
    }
    ans.push_back(v[pos]);
    solve(pos+1,sum+v[pos]);
    ans.pop_back();
    solve(pos+1,sum);
}
int main() {
    FIO
    while (cin>>N) {
        mx = 0;
        v.clear();
        ans.clear();
        cin>>n;
        for (int i = 0; i < n; ++i) {
            int x; cin>>x;
            v.push_back(x);
        }
        solve(0,0);
        for(auto i:bans){
            cout<<i<<" ";
        }
        cout<<"sum:"<<mx<<"\n";
    }
    return 0;
}