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
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        ans^=vec[i];
    }

    for(int i=0;i<n;i++)cout<<(ans^vec[i])<<' ';
    cout<<'\n';

    return 0;
}

