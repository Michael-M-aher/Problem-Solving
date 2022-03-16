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
    vector<int> v(20,0);
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;
        for (int j = 0; j < 20; ++j) {
            if(x&(1<<j)){
                v[j]++;
            }
        }
    }
    ll sum = 0;
    while(true){
        ll curnum=0;
        for (int i = 0; i < 20; ++i) {
            if(v[i]>0){
                curnum |= (1<<i);
                v[i]--;
            }
        }
        sum+= curnum*curnum;
        if(curnum==0){
            break;
        }
    }
    cout<<sum<<"\n";
    return 0;
}