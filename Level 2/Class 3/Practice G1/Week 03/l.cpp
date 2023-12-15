
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

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>pre(n+1);
        for(int i=1;i<=n;i++){
            if(s[i-1]=='-')pre[i]--;
            else pre[i]++;
        }
        for(int i=1;i<=n;i++)pre[i]+=pre[i-1];

        vector<int>premx(n+1),premn(n+1),sufmx(n+1),sufmn(n+1);
        for(int i=0;i<=n;i++){
            premx[i]=premn[i]=pre[i];
            if(i){// i!=0
                premx[i]=max(premx[i],premx[i-1]);
                premn[i]=min(premn[i],premn[i-1]);

            }
        }
        for(int i=n;i>=0;i--){
            sufmx[i]=sufmn[i]=pre[i];
            if(i<n){
                sufmx[i]=max(sufmx[i],sufmx[i+1]);
                sufmn[i]= min(sufmn[i],sufmn[i+1]);
            }
        }

        while(m--){
            int l,r;
            cin>>l>>r;
            int mx=premx[l-1];
            int mn=premn[l-1];
            if(r<n){
                mx=max(mx,sufmx[r+1]-(pre[r]-pre[l-1]));
                mn=min(mn,sufmn[r+1]-(pre[r]-pre[l-1]));
            }
            cout<<mx-mn+1<<'\n';

        }


    }







    return 0;
}

