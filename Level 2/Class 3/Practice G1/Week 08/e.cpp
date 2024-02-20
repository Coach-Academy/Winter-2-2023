#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



void solve(ll n,ll m,int cnt){
    if(n==m){
        cout<<cnt<<'\n';
        exit(0);
    }
    if(n>m)return;
    solve(n*2,m,cnt+1);
    solve(n*3,m,cnt+1);
}


signed  main(){
    ll n,m;
    cin>>n>>m;
    solve(n,m,0);
    cout<<"-1\n";

    return 0;
}

