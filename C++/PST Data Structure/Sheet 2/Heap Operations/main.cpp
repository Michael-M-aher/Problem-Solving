#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<string> v;
    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        if(str=="insert"){
            int x;cin>>x;
            pq.push(x);
            v.push_back("insert "+ to_string(x));
        }else if(str=="getMin"){
            int x;cin>>x;
            while(!pq.empty()&&pq.top()<x){
                pq.pop();
                v.push_back("removeMin");
            }
            if(pq.empty()||pq.top()!=x){
                v.push_back("insert "+ to_string(x));
                pq.push(x);
            }
            v.push_back("getMin "+ to_string(x));


        }else{
            if(!pq.empty()){
                pq.pop();
                v.push_back("removeMin");
            }else{
                v.push_back("insert "+ to_string(0));
                v.push_back("removeMin");
            }
        }
    }
    cout<<v.size()<<"\n";
    for(auto i:v){
        cout<<i<<"\n";
    }
    return 0;
}
