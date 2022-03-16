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
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        int a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        c1-=a1;c2-=a2;c3-=a3;
        a4-= min(c1,a4);
        a5-= min(c2,a5);
        c3-= (a4+a5);

        if(c1>=0&&c2>=0&&c3>=0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}