#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;


int main()
{
    FIO
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": ";
        ll n, a3, a4, a5 = 0;
        cin >> n;
        vector<ll> f(n+1,0), p(n+1,0), b3(n+1,0), cnt(n+1,0);
        vector<vector<int>> idx(n+1,vector<int>(0));
        queue<int> q;
        for (int j = 1; j <= n; j++){
            cin >> f[j];
        }
        for (int j = 1; j <= n; j++)
        {
            ll x;
            cin >> x;
            p[j] = x;
            idx[x].push_back(j);
            cnt[x]++;
        }
        for (int j = 0; j <= n; j++){
            if (cnt[j] == 0){
                q.push(j);
            }
        }
        while (!q.empty()){
            ll x = q.front();
            q.pop();
            a3 = 1 << 30;
            for (int j = 0; j < idx[x].size(); j++){
                if (b3[idx[x][j]] < a3){
                    a3 = b3[idx[x][j]];
                    a4 = j;
                }
            }
            if (a3 == 1 << 30) {
                a3 = 0;
            }
            for (int q1 = 0; q1 < idx[x].size(); q1++){
                if (q1 != a4) {
                    a5 += b3[idx[x][q1]];
                }
            }
            b3[x] = max(f[x], a3);
            cnt[p[x]]--;
            if (cnt[p[x]] == 0) {
                q.push(p[x]);
            }
        }
        cout << a5 + b3[0] << "\n";
    }
    return 0;
}