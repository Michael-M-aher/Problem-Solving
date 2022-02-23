#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    string ans="No";
    cin>>a>>b>>c;
    if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=c)){
        ans="Yes";
    }
    cout << ans << endl;
    return 0;
}
