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
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int lst =v[0].second;
    for (int i = 1; i < n; ++i) {
        if(v[i].second>=lst){
            lst=v[i].second;
        }else{
            lst=v[i].first;
        }
    }
    cout<<lst;
    return 0;
}