#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;cin >> t;
    while(t--){
        int n,ans=0;cin >> n;
        vector<float> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < n-1; ++i) {
            float a= min(v[i],v[i+1]), b= max(v[i],v[i+1]);
            float c=b/a;
            while(c>2){
                ans++;
                c/=2;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}