
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
const int MOD=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
#define all(x) (x).begin(),(x).end()
#define mm(f, x) memset(f,x,sizeof(f))
#define f(n) for(int i=0;i<n;++i)
#define fa(i,a,n) for(int i=(a);i<=(n);++i)
#define  c(vec) for(auto &x:vec)cin>>x;
#define ff(vec) for(auto &x:vec)cout<<x<<' ' ;cout<<'\n';
#define fp(vec) for(auto &x:vec)cout<<x.first<<' '<<x.second<<'\n';
#define debug(x) cout<<#x<<":"<<x<<endl;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define pb push_back
#define sz(a) (int)(a).size()
const long double EPS=1e-7;
const ll MOD1=1e18+7;
int dr[]={-1, -1, -1, 0, 1, 1,  1,  0};
int dc[]={-1,  0,  1, 1, 1, 0, -1, -1};
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};


signed  main(){
    FAST
    int q;
    cin>>q;
    map<int,int>mp;
    set<pair<int,int>,greater<>>st;
    int cus=1;
    int cur=1;
    while(q--){
        int op;
        cin>>op;
        if(op==1){
            int cost;
            cin>>cost;
            st.insert({cost,cus*-1});
            cus++;
        }
        else if(op==2){
            while(mp[cur]){// (mp[cur]!=0
                cur++;
            }
            cout<<cur<<' ';
            mp[cur]=1;
        }
        else{
            while(mp[st.begin()->second*-1]){
                st.erase(st.begin());
            }
            cout<<st.begin()->second*-1<<' ';
            mp[st.begin()->second*-1]=1;
        }
    }



    return 0;
}



