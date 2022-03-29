#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

bool check(vector<int> v,int k, int num){
    int lst = v[0];
    int ans =1;
    for (int i = 1; i < v.size(); ++i) {
        if(v[i]-lst+1<=num){
            continue;
        }
        lst=v[i];
        ans++;
    }
    if(ans<=k){
        return true;
    }else{
        return false;
    }
}

int main() {
    FIO
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        int st=0,en = 1e9+5;
        while(st<=en){
            int mid = (st+en)/2;
            if(check(v,k,mid)){
                en = mid-1;
            }else{
                st=mid+1;
            }
        }
        cout<<en+1<<"\n";
    }
    return 0;
}