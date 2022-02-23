#include <iostream>

using namespace std;

int main()
{
    int k,n,Count=0;
    cin>>n>>k;
    string arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        bool good = true;
        for(int j =0;j<k+1;j++){
            int found = arr[i].find(to_string(j));
            if(found == string::npos){
                good = false;
                break;
            }
        }
        if(good){
            Count+=1;
        }
    }

    cout << Count << endl;
    return 0;
}
