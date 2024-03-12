#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;


int n,arr[50005][6],r[50005];

bool cmp(int a,int b){
    int cnt=0;
    for(int i=1;i<=5;i++){
        if(arr[a][i]<arr[b][i])cnt++;
    }
    return cnt>=3;
}


signed  main(){
    FAST
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=5;j++){
                cin>>arr[i][j];
            }

        for(int i=1;i<=n;i++)r[i]=i;
        sort(r+1,r+n+1,cmp);
        bool flag=1;
        for(int i=2;i<=n;i++){
            if(!cmp(r[1],r[i])){
                flag=0;
                break;
            }
        }
        if(flag)cout<<r[1]<<'\n';
        else cout<<"-1\n";




    }
    return 0;
}

