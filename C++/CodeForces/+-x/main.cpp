#include <iostream>

using namespace std;

int main()
{
    int a,b,Max;
    cin>>a>>b;
    if((a+b)>(a-b)){
        if((a+b)>(a*b)){
            Max = (a+b);
        }else{
            Max = (a*b);
        }
    }else{
        if((a-b)>(a*b)){
            Max = (a-b);
        }else{
            Max = (a*b);
        }
    }
    cout << Max << endl;
    return 0;
}
