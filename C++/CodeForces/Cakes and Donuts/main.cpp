#include <iostream>

using namespace std;

int main()
{
    int n;
    string ans = "No";
    cin>>n;
    for(int i = 0;i<26;i++){
        for(int j=0;j<14;j++){
            if ((4*i)+(7*j)==n){
                ans = "Yes";
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
