#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

bool check(vector<int> a,vector<int> b,int num,int k){
    for (int i = 0; i < a.size(); ++i) {
        int need = num*a[i];
        if(b[i]>=need){
            continue;
        }
        need -= b[i];
        if(k<need){
            return false;
        }
        k-=need;
    }
    return true;
}

int main() {
    FIO
    int n,k;
    cin >>n>>k;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>b[i];
    }
    int st=0,en=2005;
    while (st<=en){
        int mid = (st+en)/2;
        if(check(a,b,mid,k)){
            st = mid+1;
        }else{
            en = mid-1;
        }
    }
    cout<<st-1<<"\n";
    return 0;
}