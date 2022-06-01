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
        int n;cin>>n;
        priority_queue<int> pq;
        for (int i = 0; i < n; ++i) {
            int x;cin>>x;
            pq.push(x);
        }
        while(!pq.empty()&&pq.top()>pq.size())
            pq.pop();
        cout<<pq.size()+1<<"\n";
    }
    return 0;
}