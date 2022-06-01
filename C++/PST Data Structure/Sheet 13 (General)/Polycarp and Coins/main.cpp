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
        int coin1,coin2;
        int x;cin>>x;
        int y = coin1 = coin2 = x/3;
        y*=3;
        int diff = x-y;
        if(diff==1){
            coin1++;
        }else if(diff==2){
            coin2++;
        }
        cout<<coin1<<" "<<coin2<<"\n";
    }
    return 0;
}