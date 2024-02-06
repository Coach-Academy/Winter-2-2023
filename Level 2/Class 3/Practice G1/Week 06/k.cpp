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
        int n ,a,b;
        string s;
        cin>>n>>a>>b>>s;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])cnt++;
        }

        cnt/=2;
        cnt+=1;
        cout<<a*n+max(b*n,cnt*b)<<'\n';


    }












    return 0;
}

