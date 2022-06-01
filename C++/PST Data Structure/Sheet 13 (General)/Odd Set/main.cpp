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
        int n,even=0,odd=0;
        cin >> n;
        for (int i = 0; i < 2*n; i++) {
            int x;cin>>x;
            if(x%2==0){
                even++;
            } else{
                odd++;
            }
        }
        bool t = (even == odd);
        cout << (t?"Yes":"No") << endl;
    }
    return 0;
}