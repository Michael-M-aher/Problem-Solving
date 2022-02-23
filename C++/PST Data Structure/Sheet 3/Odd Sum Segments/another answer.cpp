#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k,cnt=0;cin>>n>>k;
        vector<int> v,ans;
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            v.push_back(x);
        }
        long long sum =0;
        for (int i = 0; i < n; ++i) {
            sum+=v[i];
            if(k>1&&sum%2==1){
                k--;
                ans.push_back(i+1);
                sum=0;
            }
        }
        if(sum%2==0){
            cout<<"NO\n";
        }else{
            ans.push_back(n);
            cout<<"YES\n";
            for (auto i:ans) {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}