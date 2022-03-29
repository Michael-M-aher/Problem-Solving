#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const ll N = 2e12 + 5;
const int mod = 1e9 + 7;
bool check(vector<int> n,vector<int> h,vector<int> p,ll r,ll num){
    ll need[3];
    for (int i = 0; i < 3; ++i) {
        need[i]=n[i]*num;
        if(h[i]>need[i]){
            continue;
        }
        need[i]-=h[i];
        if(r<p[i]*need[i]){
            return false;
        }
        r-=p[i]*need[i];
    }
    return true;
}
int main() {
    FIO
    string str;
    cin >> str;
    vector<int> n(3,0),h(3,0),p(3,0);
    ll r;
    for (int i = 0; i < str.size(); ++i) {
        if(str[i]=='B'){
            n[0]++;
        }else if(str[i]=='S'){
            n[1]++;
        }else{
            n[2]++;
        }
    }
    for (int i = 0; i < 3; ++i) {
        cin>>h[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin>>p[i];
    }
    cin>>r;
    ll st=0,en= N;
    while(st<=en){
        ll mid = (st+en)/2;
        if(check(n,h,p,r,mid)){
            st=mid+1;
        }else{
            en = mid-1;
        }
    }
    cout<<st-1;
    return 0;
}