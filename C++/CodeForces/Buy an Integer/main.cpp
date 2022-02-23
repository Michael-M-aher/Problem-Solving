#include <iostream>

using namespace std;

int main()
{
    int a,b,x,num=0;
    cin>>a>>b>>x;
    for(int i=0;i<99999999999999999999;i++){
        int count=0,tmp=i;
        while(tmp!=0){
            tmp/=10;
            count++;
        }

        if((a*i+count*b)<x){
            num=i;
        }else{
            cout<<"break"<<num;
            break;
        }
    }
    cout<<num;
    return 0;
}
