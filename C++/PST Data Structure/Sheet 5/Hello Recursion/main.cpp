#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
int Sum(int N,int score){
    if(N==0){
        return score;
    }
    int x;cin>>x;
    return Sum(N-1,score+=x);
}

int main() {
    FIO
    int t,N;
    cin >> t;
    for (int i=0;i<t;++i) {
        cin>>N;
        cout<<"Case "<<i+1<<": "<<Sum(N,0)<<"\n";
    }
    return 0;
}