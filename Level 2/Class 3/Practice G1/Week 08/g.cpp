#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

vector<int>r(9);
vector<vector<int>>allp;


bool valid(int row,int col){
    for(int i=1;i<col;i++){
        if(r[i]==row||abs(r[i]-row)==abs(i-col))return 0;
    }
    return 1;
}

void solve(int col){
    if(col==9){
        allp.push_back(r);
        return;
    }
    for(int i=1;i<=8;i++){
        if(valid(i,col)){
            r[col]=i;
            solve(col+1);
        }
    }
}

signed  main(){

    solve(1);
    vector<int>vec(9);
    int t=1;
    while(cin>>vec[1]){
        for(int i=2;i<=8;i++)cin>>vec[i];
        int mn=INT_MAX;
        for(int i=0;i<allp.size();i++){
            int cnt=0;
            for(int j=1;j<=8;j++)
                if(allp[i][j]!=vec[j])cnt++;

            mn=min(mn,cnt);
        }
        cout<<"Case "<<t++<<": "<<mn<<'\n';


    }


    return 0;
}

