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
    set<ll>st;
    for(int i=2;i<=10;i+=2){
        for(int mask=0;mask<(1ll<<i);mask++){
            ll val=0;
            ll cnt4=0,cnt7=0;
            for(int j=0;j<i;j++){
                if((mask&(1ll<<j))==0){
                    val*=10;
                    val+=4;
                    cnt4++;
                }
                else{
                    val*=10;
                    val+=7;
                    cnt7++;
                }
            }

            if(cnt4==cnt7)st.insert(val);
        }
    }
    cout<<*st.lower_bound(n)<<'\n';


    return 0;
}

