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
    while(t--) {
        ll n,a,b;
        cin>>n>>a>>b;
        if(a==1){
            if((n-1)%b==0)cout<<"Yes\n";
            else cout<<"No\n";
        }
        else{
            ll x=1;
            bool flag=0;
            while(x<=n){
                if((n-x)%b==0){
                    flag=1;
                    break;
                }
                x*=a;
            }
            if(flag)cout<<"Yes\n";
            else cout<<"No\n";



        }

    }

    return 0;
}

