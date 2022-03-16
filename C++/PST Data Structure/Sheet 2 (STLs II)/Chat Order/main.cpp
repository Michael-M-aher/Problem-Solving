#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    map<string,int> mp;
    stack<string> s;
    int n,c=0;cin>>n;
    for(int i=0;i<n;++i){
        string str;cin>>str;
        s.push(str);
    }
    for(int i=0;i<n;++i){
        if(mp[s.top()]==0){
            cout<<s.top()<<"\n";
            mp[s.top()]=1;
            s.pop();
        }else{
            s.pop();
        }
    }
    return 0;
}
