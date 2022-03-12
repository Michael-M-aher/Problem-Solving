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
        string str;
        vector<char> ans;
        cin>>str;
        ans.push_back('1');
        for (int i = 1; i < n; ++i) {
            if(ans.back()=='1'){
                if((str[i-1]=='1'&&str[i]=='1')||(str[i-1]=='0'&&str[i]=='0')){
                    ans.push_back('0');
                }else{
                    ans.push_back('1');
                }
            }else if(ans.back()=='0') {
                if (str[i - 1] == '1' && str[i] == '0') {
                    ans.push_back('0');
                } else {
                    ans.push_back('1');
                }
            }
        }
        for (auto i:ans) {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}