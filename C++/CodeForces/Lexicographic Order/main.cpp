#include <iostream>

using namespace std;

int main()
{
    string s,t,ans;
    bool Equal=false;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i]<t[i]){
            Equal=false;
            ans="Yes";
            break;
        }else if(s[i]>t[i]){
            Equal=false;
            ans="No";
            break;
        }else{
            Equal=true;
        }
    }
    if(Equal){
        (s.length()<t.length())?ans="Yes":ans="No";
    }
    cout << ans << endl;
    return 0;
}
/*
#include <iostream>

using namespace std;

int main()
{
    string s,t,ans;
    bool Equal=false;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i]<t[i]){
            Equal=false;
            ans="Yes";
        }else if(s[i]>t[i]){
            Equal=false;
            ans="No";
            break;
        }else{
            Equal=true;
        }
    }
    if(Equal){
        (s.length()<t.length())?ans="Yes":ans="No";
    }
    cout << ans << endl;
    return 0;
}
*/
