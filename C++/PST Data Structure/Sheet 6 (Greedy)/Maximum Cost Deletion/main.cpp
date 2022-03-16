#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;cin>>n>>a>>b;
        string str;cin>>str;
        int score = a*n;
        if(b>=0){
            score+=b*n;
        }else{
            int cnt=1;
            for (int i = 1; i < n; ++i) {
                if(str[i]!=str[i-1]){
                    cnt++;
                }
            }
            score+=((cnt/2)+1)*b;
        }
        cout<<score<<"\n";
    }
    return 0;
}