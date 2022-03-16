#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t,curr,c=0,crim=0;
    vector<int> v,v2;
    cin >> t>>curr;
    curr--;
    for (int i=0;i<t;++i) {
        int x;cin>>x;
        v.push_back(x);
        if(x==1){
            v2.push_back(c);
        }
        c++;
    }
    for (int i : v2) {
        int z = curr-i;
        if((curr+z)<0||(curr+z)>=t){
            crim++;
            continue;
        }else if(v[curr+z]==1){
            crim++;
        }
    }
    cout<<crim<<"\n";
    return 0;
}