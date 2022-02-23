#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n,x,y;
    stack<int> easyS;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        switch(x){
        case 1:
            scanf("%d", &y);
            easyS.push(y);
            break;
        case 2:
            if(!easyS.empty()){
                easyS.pop();
            }
            break;
        case 3:
            if(!easyS.empty()){
                printf("%d\n", easyS.top());
            }else{
                printf("Empty!\n");
            }
            break;
        }
    }
    return 0;
}
