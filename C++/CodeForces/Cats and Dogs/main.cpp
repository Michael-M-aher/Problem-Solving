#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    string ans;
    cin>>a>>b>>x;
    if((a<x&&x<=(a+b))||a==x){
        ans="YES";
    }else{
        ans="NO";
    }
    cout << ans << endl;
    return 0;
}
