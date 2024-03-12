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
        int n,k;
        cin>>n>>k;
        map<ll,ll>frq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%k)frq[k-(x%k)]++;
        }
        if(frq.empty())cout<<"0\n";
        else{
            ll mx=0;
            for(auto x:frq){
                mx=max(mx,(x.first+1+((x.second-1)*k)));
            }
            cout<<mx<<'\n';

        }

    }





    return 0;
}

