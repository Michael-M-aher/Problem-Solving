#include <iostream>

using namespace std;

void rotateLeft(int,int*,int);
int main()
{
    int d ,n, elem,*arr;
    scanf("%d" "%d",&n,&d);
    arr = new int[n];
    for(int i=0;i<n;i++){
        scanf("%d",&elem);
        arr[i]=elem;
    }
    rotateLeft(d,arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void rotateLeft(int d,int* arr,int n){
    while(d--){
        int temp=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}
