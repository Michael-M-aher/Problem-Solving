#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string str;
    stack<char> stt;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(stt.empty()){
            stt.push(str[i]);
        }
        else if(str[i]==stt.top()){
            stt.pop();
        }else{
            stt.push(str[i]);
        }
    }
    if(stt.empty()){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}
