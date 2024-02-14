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




bool valid(long long m,int c,vector<long long>vec){
    long long st=vec[0];
    int cnt=1;
    for(int i=1;i<vec.size();i++){
        if(st+m>vec[i])continue;
        cnt++;
        st=vec[i];
    }

    return cnt>=c;
}

signed  main(){
    FAST


    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<ll>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());
        ll l=0,r=1e9+5;
        ll ans=0;
        while(l<=r){
            ll m=l+(r-l)/2;
            if(valid(m,c,vec)){
                l=m+1;
                ans=m;
            }
            else r=m-1;
        }
        cout<<ans<<'\n';


    }




    return 0;
}