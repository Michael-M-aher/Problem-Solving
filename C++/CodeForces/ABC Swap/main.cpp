#include <iostream>

using namespace std;

int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    temp=a;a=c;c=b;b=temp;
    cout <<a<<" "<<b<<" "<<c<< endl;
    return 0;
}
