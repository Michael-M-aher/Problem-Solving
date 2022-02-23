#include <iostream>

using namespace std;

int main()
{
    int k,x;
    string ans;
    cin>>k>>x;
    if(k*500>=x){
        ans="Yes";
    }else{
        ans="No";
    }
    cout << ans << endl;
    return 0;
}
