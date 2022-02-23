#include <iostream>

using namespace std;

int main()
{
    string ans="No";
    int n,temp;
    cin>>n;
    for(int i=0;i<3;i++){
        temp=n%10;n/=10;
        if(temp==7){
            ans="Yes";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
