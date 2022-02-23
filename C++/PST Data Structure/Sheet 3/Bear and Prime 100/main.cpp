#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    vector<int> v;
    v.push_back(2);
    for (int i = 3; i < 50; ++i) {
        bool is_prime =true;
        for (int j = 2; j < i; ++j) {
            if(i%j==0){
                is_prime =false;
                break;
            }
        }
        if(is_prime){v.push_back(i);}

    }
    int  cnt =0;
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<endl;
        string str;cin>>str;
        if(str == "yes"){
            cnt ++;
        }
        if(v[i]*v[i]<100){
            cout<<v[i]*v[i]<<endl;
            string str2;cin>>str2;
            if(str2 == "yes"){
                cnt ++;
            }
        }
    }
    if(cnt>1){
        cout<<"composite\n";
    }else{
        cout<<"prime\n";
    }
    return 0;
}