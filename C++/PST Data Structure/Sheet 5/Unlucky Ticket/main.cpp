#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n;
    bool v1=true,v2=true;
    cin >> n;
    string str;
    cin>>str;
    sort(str.begin(),str.begin()+n);
    sort(str.begin()+n,str.end());
    for (int i = 0; i < n; ++i) {
        v1&=str[i]>str[n+i];
        v2&=str[i]<str[n+i];
    }
    if(v1|v2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}