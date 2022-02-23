#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--){
        int rat;
        bool l = true;
        deque<int> dq1,dq2;
        int n;cin>>n;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            dq1.push_back(x);

        }
        for(int i=0;i<n;++i){
            int x;cin>>x;
            dq2.push_back(x);

        }
        while(!dq1.empty()&&dq1.front()==dq2.front()){
                dq1.pop_front();
                dq2.pop_front();
        }

            while(!dq1.empty()&&dq1.back()==dq2.back()){
                dq1.pop_back();
                dq2.pop_back();
            }
            int c=dq1.size();
            for(int i=0;i<c;++i){
                if(i==0){
                    rat = dq2.front()-dq1.front();
                    if(rat<0){
                        l=false;
                        break;
                    }
                    dq1.pop_front();
                    dq2.pop_front();
                    continue;
                }
                if(dq2.front()-dq1.front()==rat){
                    dq1.pop_front();
                    dq2.pop_front();
                }else{
                    l=false;
                    break;
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
