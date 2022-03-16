#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int q,c=0;cin>>q;
    set<int> s;
    set<pair<int,int>,greater<pair<int,int>>> sp;
    map<int,int> mp;
    while(q--){
        int q;cin>>q;
        if(q==1){
            int x;cin>>x;
            c++;
            s.insert(c);
            sp.insert(make_pair(x,-c));
            mp[c]=x;
        }else if(q==2){
            int num = *(s.begin());
            cout<<num<<" ";
            s.erase(num);
            sp.erase(make_pair(mp[num],-num));
            mp.erase(num);
        }else{
            pair<int,int> cust = *(sp.begin());
            int num = -cust.second;
            cout<<num<<" ";
            s.erase(num);
            sp.erase(make_pair(mp[num],-num));
            mp.erase(num);
        }
    }
    return 0;
}
