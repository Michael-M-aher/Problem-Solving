#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int d[N],ind[N];
queue<int> L,R;

int main() {
    FIO
    int t;cin >> t;
    while (t--) {
        char c;int id;cin>>c>>id;
        if(c=='?'){
            if(d[id]){
                cout<<min(R.size()-ind[id]-1,L.size()+ind[id]-1)<<"\n";
            }else{
                cout<<min(L.size()-ind[id]-1,R.size()+ind[id]-1)<<"\n";
            }
        }else if(c=='L'){
            d[id]=0;
            ind[id]=L.size();
            if(L.size()==0)
                R.push(id);
            L.push(id);
        }else if(c=='R'){
            d[id]=1;
            ind[id]=R.size();
            if(R.size()==0)
                L.push(id);
            R.push(id);
        }
    }
    return 0;
}