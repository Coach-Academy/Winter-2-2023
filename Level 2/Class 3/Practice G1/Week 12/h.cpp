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
        int n,q;
        cin>>n>>q;
        vector<ll>pre,idxpre;
        ll sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(pre.empty()||pre.back()<sum){
                pre.push_back(sum);
                idxpre.push_back(i);
            }
        }

        while(q--){
            int x;
            cin>>x;
            if(pre.back()<x&&sum<=0)cout<<"-1 ";
            else{
                ll cnt=0;
                if(x>pre.back()){
                    cnt=(x-pre.back()+sum-1)/sum;
                }

                ll ans=cnt*n;
                x-=sum*cnt;
                ll idx= lower_bound(pre.begin(),pre.end(),x)-pre.begin();
                cout<<ans+idxpre[idx]<<' ';

            }
        }
        cout<<'\n';


    }



    return 0;
}

