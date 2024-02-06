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
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];


        int i=0;
        while(k>0&&i<n-1){
            if(vec[i]==0)i++;
            else {
                vec[i]--;
                vec[n - 1]++;
                k--;
            }
        }


        for(i=0;i<n;i++)cout<<vec[i]<<' ';
        cout<<'\n';


    }








    return 0;
}

