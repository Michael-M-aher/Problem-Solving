#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
#define ordered_set tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>

#define FIO ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

typedef long double ld;

using namespace std;

const int N = 1e3 + 5;
const int mod = 1e9 + 7;

int main() {

    FIO
    int n;cin >> n;
    ordered_set ost;
    for (int i=0;i<n;++i) {
        ll x;
        char c;cin>>c>>x;
        if(c=='a'){
            ost.insert({x,i});
        }else{
            auto it = ost.lower_bound({x,0});
            if(it!=ost.end()&&x==it->first){
                ost.erase(it);
            }else{
                cout<<"Wrong!\n";
                continue;
            }
        }

        if(!ost.empty()){
            if(ost.size()%2==1){
                cout<<ost.find_by_order((ost.size()/2))->first<<"\n";
            }else{
                double res =(ost.find_by_order(ost.size()/2-1)->first+ost.find_by_order(ost.size()/2)->first)/2.0;
                if(res==(ll)res){
                    cout<<(ll)res<<"\n";
                }
                else{
                    cout<<fixed<<setprecision(1)<<res<<"\n";
                }
            }
        }else{
            cout<<"Wrong!\n";
        }

    }
    return 0;
}