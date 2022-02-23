#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,a,c=0;
    cin>>n>>a;
    vector<int>v(n);
    for(int i=0;i<n;++i) cin>>v[i];

    a-=1;
    int i=a-1,j=a+1,ans=0;
    //cout<<"A"<<a<<" I: "<<i<<" J " <<j<<endl;
    if(v[a]==1) ans++;
    while(i>=0 && j<n){
        c++;
        if(v[i]==1 && v[j]==1){
            ans+=2;
        }
        i-=1;j+=1;
    }
    //cout<<"A"<<a<<" I: "<<i<<" J " <<j<<endl;
    bool flag;

    if(a>=n/2){
        flag = true;
    }
    else{
        flag = false;
    }

    if(flag){
        for (int k = 0; k < a-c; ++k) {
            if(v[k]==1){
                ans++;
            }
        }
    }else{
        for (int k = a+c+1; k < n; ++k) {
            if(v[k]==1){
                ans++;
            }
        }
    }
    cout<<ans<<'\n';

    return 0;
}