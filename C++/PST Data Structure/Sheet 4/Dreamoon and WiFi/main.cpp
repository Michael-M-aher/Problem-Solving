#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    string str1,str2;
    cin>>str1>>str2;
    int num =count(str2.begin(),str2.end(),'?');
    int numpos =count(str1.begin(),str1.end(),'+');
    int numneg =count(str1.begin(),str1.end(),'-');
    int numpos2 =count(str2.begin(),str2.end(),'+');
    int numneg2 =count(str2.begin(),str2.end(),'-');
    int moves = numpos-numneg;
    int moves2 = numpos2-numneg2,cnt=0;
    for (int i = 0; i < (1 << num); ++i) {
        int tst = moves2;
        for (int j = 0; j < num; ++j) {
            if(1&(i>>j)){
                tst++;
            }else{
                tst--;
            }
        }
        if(tst==moves){
            cnt++;
        }

    }
    cout<<fixed<<setprecision(12)<<(double)cnt/(1<<num)<<"\n";
    return 0;
}