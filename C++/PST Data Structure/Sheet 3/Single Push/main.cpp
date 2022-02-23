#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--){
        bool l = true;
        vector<int> v1,v2;
        deque<int> dq;
        int n;cin>>n;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            v1.push_back(x);

        }
        for(int i=0;i<n;++i){
            int x;cin>>x;
            v2.push_back(x);
            dq.push_back(v2[i]-v1[i]);

        }
        while(!dq.empty()&&dq.front()==0){
            dq.pop_front();
        }
        while(!dq.empty()&&dq.back()==0){
            dq.pop_back();
        }
        if(!dq.empty()){
            int c=dq.front();

            for(auto i:dq){
                if(i<0){
                    l=false;
                    break;
                }else if(i!=c){
                    l=false;
                    break;
                }
            }
        }
        if(l){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
