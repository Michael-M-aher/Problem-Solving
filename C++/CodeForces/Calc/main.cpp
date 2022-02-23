#include <iostream>

using namespace std;

int main()
{
    int a,temp=1,sum=0;
    cin>>a;
    for(int i = 1;i<4;i++){
        temp*=a;
        sum+=temp;
    }
    cout << sum << endl;
    return 0;
}
