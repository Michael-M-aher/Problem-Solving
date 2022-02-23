#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    string str,ans;
    cin >> str;
    int pcount=str.size()-1;
    ll sum=0;
    for (int i = 0; i < (1<<pcount); ++i) {
        ans=str[0];
        for (int j = 0; j < pcount; ++j) {
            if((i>>j)&1){
                sum+=stoll(ans);
                ans=str[j+1];
            }else{
                ans+=str[j+1];
            }
        }
        sum+=stoll(ans);
    }
    cout<<sum;
    return 0;
}