#include <iostream>

using namespace std;

int main()
{
    int n,k,ans;
    cin>>n>>k;
    if(n%k==0){
        ans=0;
    }else{
        ans=1;
    }
    cout <<ans<< endl;
    return 0;
}
