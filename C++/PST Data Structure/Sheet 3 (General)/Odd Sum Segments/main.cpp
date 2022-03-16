#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;cin >> t;
    while (t--) {
        int n,k,cnt=0;cin>>n>>k;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            v.push_back(x);
            if(x%2!=0){
                cnt++;
            }
        }
        if(cnt<k||cnt%2!=k%2){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            for (int i = 0; i < n; ++i) {
                if(k==1){break;}
                if(v[i]%2!=0){
                    cout<<i+1<<" ";
                    k--;
                }
            }
            cout<<n<<"\n";
        }
    }
    return 0;
}