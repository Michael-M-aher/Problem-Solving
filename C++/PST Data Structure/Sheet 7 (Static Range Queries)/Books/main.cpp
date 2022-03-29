#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int acc[N];

int main() {
    FIO
    int n,t;
    cin >> n>>t;
    for (int i = 1; i <= n; ++i) {
        cin>>acc[i];
        acc[i]+=acc[i-1];
    }
    for (int i = 1; i <= n; ++i) {
        if(acc[i]>=t){
            cout<<i;
            break;
        }
    }
    return 0;
}