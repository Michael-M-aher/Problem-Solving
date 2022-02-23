#include <iostream>

using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    if(n>1){
        for(int i=n-1;i>0;i--){
            sum+=i;
        }
    }
    if(m>1){
        for(int i=m-1;i>0;i--){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
