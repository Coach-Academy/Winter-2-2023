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
    int n;
    cin>>n;
    vector<int>vec(21);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<20;j++){
            if((1<<j)&x)vec[j]++;
        }
    }
    ll ans=0;
    ll x=0;
    do{
        x=0;
        for(int i=0;i<20;i++){
            if(vec[i]){
                x+=(1<<i);
                vec[i]--;
            }
        }
        ans+=x*x;
    }while(x);
    cout<<ans<<'\n';

    return 0;
}

