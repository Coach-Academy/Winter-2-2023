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
        int l,r;
        cin>>l>>r;
        cout<<r%max(l,(r/2+1))<<'\n';

    }


    return 0;
}

