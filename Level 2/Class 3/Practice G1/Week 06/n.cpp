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
        int c1,c2,c3;
        int a1,a2,a4,a3,a5;
        cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
        c1-=a1;
        c2-=a2;
        c3-=a3;
        a4-=c1;
        a4=max(0,a4);
        a5-=c2;
        a5=max(0,a5);
        c3-=(a4+a5);

        if(c1<0||c2<0||c3<0)cout<<"NO\n";
        else cout<<"YES\n";



    }








    return 0;
}

