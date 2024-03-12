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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>frqa(27),frqb(26);
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++)frqa[a[i]-'a']++;
        for(int i=0;i<n;i++)frqb[b[i]-'a']++;

        bool flag=1;
        for(int i=0;i<26;i++){
            if(frqa[i]<frqb[i]){
                flag=0;
                break;
            }
            frqa[i]-=frqb[i];
            if(frqa[i]%k){
                flag=0;
                break;
            }
            frqa[i+1]+=frqa[i];
        }

        if(flag)cout<<"Yes\n";
        else cout<<"No\n";



    }




    return 0;
}

