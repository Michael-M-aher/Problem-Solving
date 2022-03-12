#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
int n,prim[11]={2,3,5,7,11,13,17,19,23,29,31};
vector<int> v(16,0),ans;
bool is_prime(int num){
    bool found = false;
    for (auto i:prim) {
        if(num == i){
            found = true;
            break;
        }
    }
    return found;
}
void solve(int m)
{
    if(m==n-1 && is_prime(ans[m] + ans[0]))
    {
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<((i==n-1)?"":" ");
        }
        cout<<"\n";
    }
    for(int i=2;i<=n;i++)
    {
        if(v[i]==0 && is_prime(ans[m]+i))
        {
//            cout<<"m"<<m<<" i "<<i<<"\nv ";
            v[i]=1;
            ans.push_back(i);
//            for(auto j:ans){
//                cout<<j<<" ";
//            }
//            cout<<"\n";
            solve(m+1);
            ans.pop_back();
            v[i]=0;
        }
    }
}

int main() {
    FIO
    int t=0;
    while(cin>>n)
    {
        ans.clear();
        for(auto j:v){
            j=0;
        }
        t++;
        if(t>1)
            cout<<"\n";
        ans.push_back(1);
        cout<<"Case "<<t<<":\n";
        solve(0);
    }
}