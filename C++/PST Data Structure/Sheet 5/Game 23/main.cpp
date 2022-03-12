#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
int m,moves=0;
bool found = false;
void solve(int num){
    if(found) return;
    if(num>=m){
        if(num==m){
            cout<<moves<<"\n";
            found = true;
        }
        return;
    }
    moves++;
    solve(num*2);
    solve(num*3);
    moves--;
}
int main() {
    FIO
    int n;cin>>n>>m;
    solve(n);
    if(!found) cout<<-1<<"\n";
    return 0;
}