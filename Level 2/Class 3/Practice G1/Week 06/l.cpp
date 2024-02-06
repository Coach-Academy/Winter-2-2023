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

    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    set<pair<ll,pair<int,int>>>st;
    st.insert({-sum,{0,n-1}});
    while(k--){
        auto itr=st.begin();
        ll Nsum=itr->first;
        cout<<-itr->first<<' ';
        int l=itr->second.first;
        int r=itr->second.second;
        st.insert({Nsum+vec[l],{l+1,r}});
        st.insert({Nsum+vec[r],{l,r-1}});
        st.erase(itr);
    }




    return 0;
}

