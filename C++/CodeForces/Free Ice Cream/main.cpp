#include <iostream>

using namespace std;

int main()
{
    int n,x,num,dist=0;
    char s;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>s>>num;
        if(s=='+'){
            x+=num;
        }else{
            if(num<=x){
                x-=num;
            }else{
                dist++;
            }
        }
    }
    cout <<x<<" "<<dist<< endl;
    return 0;
}
