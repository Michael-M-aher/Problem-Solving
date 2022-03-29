#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 2e9 ;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n;
    cin >> n;
    ll st =-N,en=N;
    while (n--) {
        string str;cin>>str;
        ll num;cin>>num;
        char c;cin>>c;
        if(str==">="){
            if(c=='Y'){
                st = max(st,num);
            }else{
                en = min(en,num-1);
            }
        }else if(str=="<="){
            if(c=='Y'){
                en = min(en,num);
            }else{
                st = max(st,num+1);
            }
        }else if(str==">"){
            if(c=='Y'){
                st = max(st,num+1);
            }else{
                en = min(en,num);
            }
        }else{
            if(c=='Y'){
                en = min(en,num-1);
            }else{
                st = max(st,num);
            }
        }
    }
    if(st<=en){
        cout<<st;
    }else{
        cout<<"Impossible";
    }
    return 0;
}