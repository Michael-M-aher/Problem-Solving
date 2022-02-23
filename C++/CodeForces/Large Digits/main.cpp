#include <iostream>

using namespace std;

int main()
{
    int num1,num2,sum1 = 0,sum2=0;
    cin>>num1>>num2;
    sum1+=(num1%10);num1/=10;
    sum2+=(num2%10);num2/=10;
    sum1+=(num1%10);num1/=10;
    sum2+=(num2%10);num2/=10;
    sum1+=num1;
    sum2+=num2;
    (sum1>sum2)?cout<<sum1:cout<<sum2;
    return 0;
}
