#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
int t,n;
int last=-1;
vector<int>ans;
bool flag=1;
void solve(int i,int sum,vector<int>&vec){
    if(sum==t){
        flag=0;
        for(int i=0;i<ans.size();i++){
            if(i)cout<<'+';
            cout<<ans[i];
        }
        cout<<'\n';
        return;
    }
    if(i==n)return;
    if(sum+vec[i]<=t&&vec[i]!=last){
        ans.push_back(vec[i]);
        solve(i+1,sum+vec[i],vec);
        ans.pop_back();
        last=vec[i];
    }
    solve(i+1,sum,vec);

}


signed  main(){
    while(cin>>t>>n,n!=0){
        last=-1;
        flag=1;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        cout<<"Sums of "<<t<<":\n";
        solve(0,0,vec);
        if(flag)cout<<"NONE\n";


    }



    return 0;
}

