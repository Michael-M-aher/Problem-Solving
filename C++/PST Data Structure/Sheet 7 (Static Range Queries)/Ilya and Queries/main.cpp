#include <bits/stdc++.h>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;
int arr[N];
int main() {
    FIO
    int n;string str;
    cin >>str>> n;
    for (int i = 1; i < str.size(); ++i) {
        if(str[i]==str[i-1]){
            arr[i]=1;
        }
        arr[i]+=arr[i-1];
    }

    while (n--) {
        int l,r;cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<"\n";
    }
    return 0;
}
