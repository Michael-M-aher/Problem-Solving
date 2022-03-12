#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n,sump=0,sumn=0;
    cin >> n;
    while (n--) {
        int x;cin>>x;
        if(x<0){
            sumn+=x;
        }else{
            sump+=x;
        }
    }
    cout<<sump-sumn<<"\n";
    return 0;
}