#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



set<ll>st;
void solve(ll val){
    if(val>1e10)return;
    st.insert(val);
    solve(val*10+4);
    solve(val*10+7);

}
signed  main(){

    solve(0);
    ll l,r;
    cin>>l>>r;
    ll sum=0;
    auto itr=st.lower_bound(l);
    while(l<=r){
        sum+=((min(r,*itr)-l+1)*(*itr));
        l=*itr+1;
        itr++;
    }
    cout<<sum<<'\n';


    return 0;
}

