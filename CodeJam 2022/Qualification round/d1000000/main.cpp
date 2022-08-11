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
    for (int j = 0; j < t; ++j) {
        cout<<"Case #"<<j+1<<": ";
        int n,ans =0;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(v.back()<v.size()){
            v.pop_back();
        }
        for (int i = 0; i < n; ++i) {
            if(v[i]>ans){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}