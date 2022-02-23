#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n ,r;
    double m ,elem ,Max=0;
    scanf("%d" "%lf",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%lf",&elem);
        if(ceil(elem / m) >=Max){
            r=i;
            Max=ceil(elem / m);
        }
    }
    printf("%d",r);
    return 0;
}
