#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int t;cin >> t;
    while (t--) {
        int n,k;
        ll sum =0;
        cin>>n>>k;
        vector<int> v1(n),v2(k);
        for (int i = 0; i < n; ++i) {
            cin>>v1[i];
        }
        for (int i = 0; i < k; ++i) {
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for (int i = 0; i < k; ++i) {
            if(v2[i]--==1){
                sum+=v1.back();
            }
            sum+=v1.back();
            v1.pop_back();
        }
        for (int i = 0; i < k; ++i) {
            if(v2[i]==0){
                continue;
            }
            while(v2[i]-- >1){
                v1.pop_back();
            }
            sum+= v1.back();
            v1.pop_back();
        }
        cout<<sum<<endl;
    }
    return 0;
}