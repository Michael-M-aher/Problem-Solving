#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
bool check(vector<int> v,int t,int num){
    vector<int> pref(v.size()+1,0);
    for (int i = 1; i < v.size()+1; ++i) {
        pref[i]=pref[i-1]+v[i-1];
    }
    for (int i = 0; i < v.size(); ++i) {
        if(i+num>v.size())
            break;
        int sum =pref[i+num]-pref[i];
        if(sum<=t){
            return true;
        }
    }
    return false;
}

int main() {
    FIO
    int n,t;
    cin >>n>> t;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    int st=0,en=n;
    while (st<=en){
        int mid =(st+en)/2;
        if(check(v,t,mid)){
            st = mid+1;
        }else{
            en =mid-1;
        }
    }
    cout<<st-1;
    return 0;
}