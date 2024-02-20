#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



int n,k;
int mx=0;
vector<int>tmp,ans;

void solve(int i,int sum,vector<int>&vec){
    if(i==k){
        if(sum>mx){
            mx=sum;
            ans=tmp;
        }
        return;
    }

    if(sum+vec[i]<=n){
        tmp.push_back(vec[i]);
        solve(i+1,sum+vec[i],vec);
        tmp.pop_back();
    }

    solve(i+1,sum,vec);

}

signed  main(){

    while(cin>>n){
        mx=0;
        cin>>k;
        vector<int>vec(k);
        for(int i=0;i<k;i++)cin>>vec[i];

        solve(0,0,vec);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
        cout<<"sum:"<<mx<<'\n';


    }




    return 0;
}

