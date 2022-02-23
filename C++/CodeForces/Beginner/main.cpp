#include <iostream>

using namespace std;

int main()
{
    int n,r,rating;
    cin>>n>>r;
    (n>=10)?rating=r:rating=(r+(100*(10-n)));
    cout << rating << endl;
    return 0;
}
