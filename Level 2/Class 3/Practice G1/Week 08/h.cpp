#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

vector<int>prime={2,3,5,7,11,13,17,19,23,29,31};
vector<int>ans(17),vis(17);
int n;

void solve(int idx){
    if(idx==n){
        int val=ans[n-1]+1;
        if(find(prime.begin(),prime.end(),val)!=prime.end()){
            for(int i=0;i<n;i++)cout<<ans[i]<<" \n"[i==n-1];
            return;
        }
    }

    for(int i=0;i<prime.size();i++){
        if(prime[i]>ans[idx-1]+n)break;
        int val=prime[i]-ans[idx-1];
        if(val<=1||vis[val])continue;
        vis[val]=1;
        ans[idx]=val;
        solve(idx+1);
        vis[val]=0;
    }

}




signed  main(){
    ans[0]=1;
    int t=1;
    while(cin>>n){
        if(t!=1)cout<<'\n';
        cout<<"Case "<<t++<<":\n";
        solve(1);

    }




    return 0;
}

