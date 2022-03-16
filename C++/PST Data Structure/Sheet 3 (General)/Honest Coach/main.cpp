#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;cin >> t;
    while (t--) {
        int n,min=999999999;
        cin >> n;
        priority_queue<int,vector<int>,greater<>> pq;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            pq.push(x);
        }
        int x =pq.top();
        pq.pop();
        for (int i = 0; i < n-1; ++i) {
            if(pq.top()-x<min){
                min=pq.top()-x;
            }
            x=pq.top();pq.pop();
        }
        cout<<min<<"\n";
    }
    return 0;
}