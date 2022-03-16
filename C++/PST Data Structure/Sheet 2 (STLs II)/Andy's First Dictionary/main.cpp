#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    set<string> s;
    string str;
    while(cin>>str){
        string strf="";
        for(int i=0;i<str.size();++i){
            char c = tolower(str[i]);
            if(c>='a'&&c<='z'){
                strf+=c;
            }else if(strf!=""){
                s.insert(strf);
                strf="";
            }
        }
        if(strf!="") s.insert(strf);
    }
    for(auto& i:s){
        cout<<i<<"\n";
    }
    return 0;
}
