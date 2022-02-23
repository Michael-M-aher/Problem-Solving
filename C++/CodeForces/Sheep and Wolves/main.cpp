#include <iostream>

using namespace std;

int main()
{
    int s,w;
    string ans;
    cin>>s>>w;
    if(w>=s){
        ans="unsafe";
    }else{
        ans="safe";
    }
    cout << ans << endl;
    return 0;
}
