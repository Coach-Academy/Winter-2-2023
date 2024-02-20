#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int n;
void solve(int i,string rule ,string name, string pass){
    if(i==rule.size()){
        cout<<pass<<'\n';
        return;
    }
    if(rule[i]=='#'){
        solve(i+1,rule ,name,pass+name);
    }
    else{
        for(char c='0';c<='9';c++){
            solve(i+1,rule,name,pass+c);
        }
    }


}


signed  main(){

    while(cin>>n){
        vector<string>dir(n);
        for(int i=0;i<n;i++)cin>>dir[i];

        int m;
        cin>>m;
        while(m--){
            string rule;
            cin>>rule;
            cout<<"--\n";
            for(int i=0;i<n;i++){
                solve(0,rule,dir[i],"");
            }


        }


    }




    return 0;
}

