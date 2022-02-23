#include <iostream>

using namespace std;

int main()
{
    int money,change;
    cin>>money;
    (money%1000==0)?change=0:change=((money/1000+1)*1000-money);
    cout<<change;
    return 0;
}
