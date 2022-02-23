#include <iostream>

using namespace std;

int main()
{
    char letter,a;
    cin>>letter;
    if(letter>=65&&letter<=90){
        a='A';
    }else{
        a='a';
    }
    cout << a << endl;
    return 0;
}
