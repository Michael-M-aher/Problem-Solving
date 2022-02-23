#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=200;i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<endl;
            break;
        }
    }
    return 0;
}
