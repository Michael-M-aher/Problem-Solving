#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,l,r,x,cnt=0;cin >>n>>l>>r>>x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i < (1<<n); ++i) {
        vector<int> va;
        int sum=0,mn=1e8,mx=0;
        for (int j = 0; j < n; ++j) {
            if(1&(i>>j)){
                sum+=v[j];
                mn= min(mn,v[j]);
                mx=max(mx,v[j]);
                va.push_back(v[j]);
            }
        }
        if(sum>=l&&sum<=r&&(mx-mn)>=x){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}