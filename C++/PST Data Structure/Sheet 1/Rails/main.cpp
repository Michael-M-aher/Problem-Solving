#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while(1){
        int n,x;cin>>n;
        if(n==0){
            break;
        }
        while(1){
            vector<int> v(n);
            stack<int> s;
            bool poss=true;
            for(int i=0;i<n;i++){
                cin>>x;
                if(x==0){
                    break;
                }
                v[i]=x;
            }
            if(x==0){
                break;
            }
            int l= 0;
            for(int i=1;i<=n;i++){
                s.push(i);
                while(!s.empty()&&v[l]==s.top()&&l<v.size()){
                    s.pop();
                    l++;
                }

            }
            (s.empty())?cout<<"Yes\n":cout<<"No\n";
        }
        cout<<"\n";
    }
    return 0;
}
