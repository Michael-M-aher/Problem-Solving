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
        int n,mn=1e9;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        vector<int> lst(n+1,-1);
        for (int i = 0; i < n; ++i) {
            if(lst[v[i]]!=-1){
                mn=min(mn,(i-lst[v[i]]+1));
            }
            lst[v[i]]=i;
        }
        if(mn==1e9){
            cout<<-1<<"\n";
        }else{
            cout<<mn<<"\n";
        }

    }
    return 0;
}