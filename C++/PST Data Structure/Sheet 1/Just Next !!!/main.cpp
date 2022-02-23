#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t,*arr; cin>>t;
    while(t--){
        int n;cin>>n;
        arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }int i,j;
        for(i=n-1;i>=0;i--){
            if(arr[i]>arr[i-1]){
                i--;
                break;
            }
        }
        if(i==-1){
            cout<<"-1\n";
            continue;
        }
        for(j=i+1;j<n;j++){
            if(arr[j]<=arr[i])
                break;
        }
        swap(arr[i],arr[j-1]);
        sort(arr+i+1,arr+n);

        for(int i=0;i<n;i++){
            cout<<arr[i];
        }
        cout<<"\n";
    }
    return 0;
}
