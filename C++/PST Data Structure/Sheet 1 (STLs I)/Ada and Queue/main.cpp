#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    int n,elem;
    bool r = true;
    char command[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",command);
        if(command[0] == 'b')
        {
            if(!dq.empty())
            {
               if(r){
                 printf("%d\n",dq.back());
                dq.pop_back();
               }else{
                    printf("%d\n",dq.front());
                dq.pop_front();
               }
            }
            else
            {
                printf("No job for Ada?\n");
            }
        }
        else if(command[0] == 'f')
        {
            if(!dq.empty())
            {
                if(r){
                    printf("%d\n",dq.front());
                dq.pop_front();
                }else{
                    printf("%d\n",dq.back());
                dq.pop_back();
                }
            }
            else
            {
                printf("No job for Ada?\n");
            }
        }
        else if(command[0] == 'r')
        {
            if(r){
                r=false;
            }else{
                r=true;
            }

        }
        else if(command[0] == 'p')
        {
            if(r){
                scanf("%d",&elem);
            dq.push_back(elem);
            }else{
                scanf("%d",&elem);
            dq.push_front(elem);
            }
        }
        else if(command[0] == 't')
        {
            if(r){
                scanf("%d",&elem);
            dq.push_front(elem);
            }else{
                scanf("%d",&elem);
            dq.push_back(elem);
            }
        }

    }
    return 0;
}
