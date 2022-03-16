#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n;cin>>n;
    int d= log10(n)+1;
    ll best = 1e17;
    for (int i = d; i <= d+3; ++i) {
        for (int msk = 0; msk < (1<<i); ++msk) {
            ll curr = 0;
            int c4=0,c7=0;
            for (int k = 0; k < i; ++k) {
                curr *=10;
                if(1&(msk>>k)){
                    curr+=7;
                    c7++;
                }else{
                    curr+=4;
                    c4++;
                }
            }
            if(c4==c7&&curr>=n&&curr<best){
                best = curr;
            }
        }
    }
    cout<<best;
    return 0;
}