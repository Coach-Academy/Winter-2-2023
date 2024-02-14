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
#define ff(vec) for(auto &x:vec)cout<<x<<' ';cout<<'\n';
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




bool valid(double m,vector<double>vec){
    double st=vec[0]+m;
    int cnt=1;
    for(int i=1;i<vec.size();i++){
        if(vec[i]>st+m){
            st=vec[i]+m;
            cnt++;
        }
    }
    return cnt<=3;
}



signed  main(){
    FAST
    int n;
    cin>>n;
    int l=-2e9,r=2e9;
    while(n--){
        string s;
        int x;
        char c;
        cin>>s>>x>>c;
        if((s==">"&&c=='N')||(s=="<="&&c=='Y')){
            r=min(r,x);
        }
        if((s=="<"&&c=='N')||(s==">="&&c=='Y')){
            l=max(l,x);
        }
        if((s=="<="&&c=='N')||(s==">"&&c=='Y')){
            l=max(l,x+1);
        }
        if((s==">="&&c=='N')||(s=="<"&&c=='Y')){
            r=min(r,x-1);
        }
    }
    if(l>r)cout<<"Impossible\n";
    else cout<<l<<'\n';







    return 0;
}