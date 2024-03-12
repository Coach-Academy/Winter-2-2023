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
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    int l=0;
    int mx=0;
    for(int r=0;r<n;r++){
        while(vec[r]-vec[l]>5)l++;

        mx=max(mx,(r-l+1));
    }
    cout<<mx<<'\n';



    return 0;
}

