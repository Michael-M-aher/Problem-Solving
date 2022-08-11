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
    while (t--) {
        vector<int> v;
        int n,idx=-1;cin>>n;
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            v.push_back(x);
            if(i>0&&x>v[i-1]){
                idx = i;
            }
        }
        if(idx == -1){
            cout<<-1<<endl;
        }else{
            swap(v[idx],v[idx-1]);
            sort(v.begin()+idx,v.end());
            for(auto i:v){
                cout<<i;
            }
            cout<<endl;
        }
    }
    return 0;
}