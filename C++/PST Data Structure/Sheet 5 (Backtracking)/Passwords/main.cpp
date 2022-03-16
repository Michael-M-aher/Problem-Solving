#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;
vector<string> words;
string rule;

void solve(int char_pos,string ans){
    if(char_pos == rule.size()){
        cout<<ans<<"\n";
        return;
    }
    if(rule[char_pos]=='#'){
        for (int i = 0; i < words.size(); ++i) {
            solve(char_pos+1,ans+words[i]);
        }
    }else{
        for (char i = '0'; i <= '9'; ++i) {
            solve(char_pos+1,ans+i);
        }
    }
}
int main() {
    FIO
    int n,m;
    while(cin>>n){
        words.clear();
        for (int i = 0; i < n; ++i) {
            string x;cin>>x;
            words.push_back(x);
        }
        cin>>m;
        cout<<"--\n";
        for (int i = 0; i < m; ++i) {
            cin>>rule;
            solve(0,"");
        }
    }
    return 0;
}