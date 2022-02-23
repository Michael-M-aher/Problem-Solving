#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--){
        map<int,int> mp;
        int n;cin>>n;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            mp[x]++;
        }
        vector<int> v;
        for(auto i:mp){
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        int mn=n;
        for(int i=0;i<v.size();++i){
            int nxt=v.size()-i;
            int val= n-(nxt*v[i]);
            mn = min(val,mn);
        }
        cout << mn << "\n";
    }

    return 0;
}
