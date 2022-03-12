#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    string str;
    bool f =true,z=true;
    vector<char> v;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        if(f&&str[i]=='0'){
            z=false;
            f = false;
            continue;
        }
        v.push_back(str[i]);
    }
    for (auto i:v) {
        if(z){
            z=false;
            continue;
        }
        cout<<i;
    }
    return 0;
}