#include <iostream>

using namespace std;

int main()
{
    int n;
    string *arr,ans;
    bool m = true;
    cin>>n;
    arr = new string[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[0][0]!=arr[i][i]||arr[0][0]!=arr[i][n-i-1]||arr[0][0]==arr[0][1]){
            m = false;
        }
        for(int j=0;j<n;j++){
            if(j==i||j==(n-i-1)){
                continue;
            }
            if(arr[0][1]!=arr[i][j]){
                m = false;
            }
        }
    }
    (m)?ans="YES":ans="NO";
    cout << ans << endl;
    return 0;
}
