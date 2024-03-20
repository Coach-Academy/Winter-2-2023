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
    int n,w;
    cin>>n>>w;
    string s[2];
    cin>>s[1]>>s[0];
    int mn=INT_MAX,idxF,idxT;
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            int mx=0;
            for(int k=0;k<n;k++){
                if(s[i][k]=='1')mx=max(mx, abs(j-k));
                if(s[1-i][k]=='1')mx=max(mx,j+k+w+2);
            }
            if(mx<mn){
                mn=mx;
                idxF=i+1;
                idxT=j+1;
            }
        }
    }
    cout<<mn<<'\n';
    cout<<idxF<<' '<<idxT<<'\n';



    return 0;
}

