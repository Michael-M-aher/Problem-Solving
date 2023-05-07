#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    while (true) {
        int n = rand() % 10 + 2;
        cout<<n<<"\n";
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            a.push_back(rand() % 100000);
        }
        for (int i = 0; i < n; ++i) {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
        int res1 = 0;
        int res2 = rand();
        if(res1 != res2) {
            cout << "Wrong Answer: " << res1 << ' ' << res2 << '\n';
            break;
        }else{
            cout<< "OK\n";
        }
    }
    return 0;
}