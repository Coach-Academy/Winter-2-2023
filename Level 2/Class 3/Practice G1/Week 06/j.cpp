#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;



signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n+1,-1);
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(vec[x]!=-1)mn=min(mn,(i-vec[x]+1));
            vec[x]=i;
        }
        if(mn==INT_MAX)cout<<"-1\n";
        else
            cout<<mn<<'\n';



    }





    return 0;
}

