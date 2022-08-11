#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int t;cin >> t;
    while (t--) {
        int n;cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin>>v[i];
        }
        int cnt=0;
        for (int i = 0; i < n; ++i) {
            int min = i;
            for (int j = i; j < n; ++j) {
                if(v[j]<v[min]){
                    min = j;
                }
            }
            if(min!=i){
                cnt++;
            }
            swap(v[i],v[min]);
        }
        cout<<cnt<<"\n";
    }
    return 0;
}