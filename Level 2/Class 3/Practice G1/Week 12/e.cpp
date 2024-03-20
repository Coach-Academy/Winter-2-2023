#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
const int MOD=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int cnt=0;
        for(ll i=1;i<=n;i=i*10+1){
            for(ll j=1;j<=9&&i*j<=n;j++){
                cnt++;
            }
        }
        cout<<cnt<<'\n';

    }


    return 0;
}

