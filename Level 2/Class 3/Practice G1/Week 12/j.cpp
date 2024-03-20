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
        int n;
        cin>>n;
        vector<pair<ll,int>>vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back({x,i});
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++)vec[i].first+=vec[i-1].first;
        set<int>st;
        st.insert(vec[n-1].second);
        for(int i=n-2;i>=0;i--){
            if(vec[i].first>=vec[i+1].first-vec[i].first)st.insert(vec[i].second);
            else break;
        }

        cout<<st.size()<<'\n';
        for(auto x:st)cout<<x+1<<' ';
        cout<<'\n';

    }



    return 0;
}

