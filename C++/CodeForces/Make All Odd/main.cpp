#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++){
        cin>>m;
        int arr[m];
        int Count = 0;
        bool odd=false;
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        for(int k=0;k<m;k++){
            if(arr[k]%2==0){
                Count+=1;
            }else{
                odd=true;
            }
        }
        if(odd){
            ans[i]=Count;
        }else{
            ans[i]=-1;
        }

    }
    for(int i=0;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}
