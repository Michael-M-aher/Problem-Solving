#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,x,y;
    queue<int> easyQ;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        switch(x){
        case 1:
            scanf("%d", &y);
            easyQ.push(y);
            break;
        case 2:
            if(!easyQ.empty()){
                easyQ.pop();
            }
            break;
        case 3:
            if(!easyQ.empty()){
                printf("%d\n", easyQ.front());
            }else{
                printf("Empty!\n");
            }
            break;
        }
    }
    return 0;
}
