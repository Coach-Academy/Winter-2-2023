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
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    cout<<2-(r1==r2||c1==c2)<<' '<<(2-(abs(r1-r2)==abs(c1-c2)))*((r1+c1)%2==(r2+c2)%2)<<' '<<max(abs(r1-r2), abs(c1-c2))<<'\n';


    return 0;
}

