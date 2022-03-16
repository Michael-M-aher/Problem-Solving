#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int next =n;
        vector <int> deck(n);
        vector <int> visit(n+1,0);
        vector <int> ndeck;
        for(int i=0;i<n;i++){
            cin>>deck[i];
        }
        while(next>=1){
            int del=0;
            for(int i=deck.size()-1;i>=0;i--){
                if(deck[i]==next){
                    for(int j=i;j<deck.size();j++){
                        ndeck.push_back(deck[j]);
                        del++;
                    }
                    for(int i=0;i<del;i++){
                        visit[deck.back()]=1;
                        deck.pop_back();
                    }
                    break;
                }


            }

            while(visit[next]){
                next--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ndeck[i]<<" ";
        }cout<<"\n";

    }
    return 0;
}
