#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>
#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {
    FIO
    int n;
    cin >> n;
    ordered_set ost;
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;
        ost.insert({x,i});
        if(ost.size()%2==1){
            int s = ost.size()/2;
            cout<<fixed<<setprecision(1)<<1.0*ost.find_by_order(s)->first<<"\n";
        }else{
            int s = ost.size()/2-1;
            double res = 1.0*(ost.find_by_order(s)->first+ost.find_by_order(s+1)->first)/2.0;
            cout<<fixed<<setprecision(1)<<res<<"\n";
        }
    }


    return 0;
}