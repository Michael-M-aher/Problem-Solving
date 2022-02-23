#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,s,cs=0,cb=0;
    cin>>n>>s;
    map<int,int,greater<int>> bm;
    map<int,int> sm;
    map<int,int>::iterator it;
    priority_queue<int> bpq,spq;
    for(int i=0; i<n; ++i)
    {
        char d;
        int p,q;
        cin>>d>>p>>q;
        if(d=='B')
        {
            bm[p]+=q;
            if(cb<s)
                cb++;
        }
        else
        {
            sm[p]+=q;
            if(cs<s)
                cs++;
        }
    }
    if(!sm.empty())
    {
        for(auto i:sm)
        {
            if(cs>0)
            {
                spq.push(i.first);
                cs--;
            }
        }
         while(spq.size())
        {
            cout<<"S "<<spq.top()<<" "<<sm[spq.top()]<<"\n";
            spq.pop();
        }
    }
    if(!bm.empty())
    {
        for(auto i:bm)
        {
            if(cb>0)
            {
                bpq.push(i.first);
                cb--;
            }
        }

        while(bpq.size())
        {
            cout<<"B "<<bpq.top()<<" "<<bm[bpq.top()]<<"\n";
            bpq.pop();
        }
    }

    return 0;
}
