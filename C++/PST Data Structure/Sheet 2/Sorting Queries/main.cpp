#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    queue<int> q;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(t--){
        int n;cin>>n;
        if(n==1){
            int x;cin>>x;
            q.push(x);

        }else if(n==2){
            if(pq.empty()){
                pq.push(q.front());
                q.pop();
            }
            cout<<pq.top()<<"\n";
            pq.pop();

        }else{
            while(!q.empty()){
                pq.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}
