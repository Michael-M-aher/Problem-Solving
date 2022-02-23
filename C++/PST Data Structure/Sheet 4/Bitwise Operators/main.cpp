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
    cin >> n;
    for (int k = 0; k < n; ++k) {
        bool t = true;
        int x;cin>>x;
        for (int i = 1; i < x; ++i) {
            int y =x^i;
            if(y<=x&&i<=y){
                t = false;
                cout<<i<<" "<<y<<"\n";
                break;
            }
        }
        if(t){
            cout<<-1<<"\n";
        }
    }
    return 0;
}