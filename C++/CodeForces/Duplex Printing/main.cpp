#include <iostream>

using namespace std;

int main()
{
    int pages,sheets;
    cin>>pages;
    (pages%2==0)?sheets=pages/2:sheets=(pages/2)+1;
    cout<<sheets;
    return 0;
}
