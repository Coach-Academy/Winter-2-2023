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
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll i=1;
        for(;(l|i)<=r;){
            l|=i;
            i<<=1;
        }
        cout<<l<<'\n';


    }
    return 0;
}

