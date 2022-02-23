#include <iostream>

using namespace std;

int main()
{
    string s,ans;
    cin>>s;
    if((s[0]==s[1]&&s[1]!=s[2])||(s[0]==s[2]&&s[0]!=s[1])||(s[1]==s[2]&&s[1]!=s[0])){
        ans="Yes";
    }else{
        ans="No";
    }
    cout << ans << endl;
    return 0;
}
