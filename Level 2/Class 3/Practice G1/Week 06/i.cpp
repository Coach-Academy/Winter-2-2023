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
        int n;
        cin>>n;
        string b;
        cin>>b;
        int prev=-1;
        for(int i=0;i<n;i++){
            if((b[i]-'0')+1==prev){
                cout<<0;
                prev=b[i]-'0';
            }
            else{
                cout<<1;
                prev=b[i]-'0'+1;
            }


        }
        cout<<'\n';


    }





    return 0;
}

