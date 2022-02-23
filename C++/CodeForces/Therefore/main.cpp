#include <iostream>

using namespace std;

int main()
{
    int n;
    string ans;
    cin>>n;
    if(n%10==3){
        ans="bon";
    }else if(n%10==0||n%10==1||n%10==6||n%10==8){
        ans="pon";
    }else{
        ans="hon";
    }
    cout << ans << endl;
    return 0;
}
