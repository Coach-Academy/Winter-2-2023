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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int i=0;
        for(;(1<<i)<=n;i++){
            if((1<<i)&n)break;
        }
        int a=(1<<i);
        if(a==n)cout<<"-1\n";
        else cout<<a<<' '<<(n^a)<<'\n';

    }
    return 0;
}

