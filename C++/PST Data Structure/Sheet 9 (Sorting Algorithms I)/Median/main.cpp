#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    bool f=true;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
        if(v[i]==k)
            f=false;
    }
    int ans=0;
    if(f){
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    for (auto i:v) {
        cout<<i<<" ";
    }
    cout<<"\n";
    for (int i = 0; i < v.size(); ++i) {
        int rq=((v.size()+1)/2)-1;
        if(v[i]==k){
            int rem = v.size()-i-1;
            if (i==rq){
                ans=0;
                break;
            }else if(i>rq){
                ans=(i-rem);
            }else{
                ans=(rem-i-1);
            }
        }
    }
    if(f)
        ans++;
    cout<<ans;
    return 0;
}