#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t,c=0;cin>>t;
    while(t--){
        int n,c=0;cin>>n;
        deque<int> dq;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            dq.push_back(x);
        }
        while(dq.front()==0){
            dq.pop_front();
        }
        while(dq.back()==0){
            dq.pop_back();
        }
        for(auto i:dq){
            if(i==0){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
