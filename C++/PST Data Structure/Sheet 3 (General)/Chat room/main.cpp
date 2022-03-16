#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    queue<char> q;
    q.push('h');
    q.push('e');
    q.push('l');
    q.push('l');
    q.push('o');
    string str;cin>>str;
    for(auto i:str){
        if(i==q.front()){
            q.pop();
        }
    }
    if(q.empty()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
