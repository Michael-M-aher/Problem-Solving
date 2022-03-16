#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

int t,n;
const int N=25;
int a[N];
bool found;
void check(int index,int sum) {
    if(index==n){
        if(sum==t){
            found = true;
        }
        return;
    }
    check(index+1,sum+=a[index]);
    check(index+1,sum-=a[index]);
}
int main(){
    FIO
    int c;
    cin>>c;
    while(c--){
        found=false;
        cin>>t>>n;
        for(int i=0;i<n;++i) cin>>a[i];
        check(0,0);
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}