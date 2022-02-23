#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long n,c=0,h=0;cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;++i){
        int x;cin>>x;
        h+=x;
        c++;
        pq.push(x);
        if(h<0){
            h-=pq.top();
            pq.pop();
            --c;
        }
    }
    cout<<c;
    return 0;
}
