#include <iostream>
#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;cin>>n;
    cin.ignore();
    while(n--){
        bool valid = true;
        string str;stack<char> st;
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            if(str[i]=='('||str[i]=='['){
                st.push(str[i]);
                continue;
            }

            if(st.empty()){
                valid = false;
                break;
            }

            if(st.top()=='['&&str[i]==']'){
                st.pop();
            }else if(st.top()=='('&&str[i]==')'){
                st.pop();
            }else{
                valid = false;
                break;
            }
        }

        if(valid){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    return 0;
}
