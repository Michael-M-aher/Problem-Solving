#include <iostream>

using namespace std;

int main()
{
    int n,sumc=0,sumv=0;
    cin>>n;
    int c[n],v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>c[i]){
            sumv+=v[i];sumc+=c[i];
        }
    }

    cout << sumv-sumc << endl;
    return 0;
}
