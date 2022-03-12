#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int fibon(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibon(n-1)+ fibon(n-2);
}
int main() {
    FIO
    int t;cin >> t;
    cout<<fibon(t);
    return 0;
}