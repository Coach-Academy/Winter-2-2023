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

const int N=1e6+5;
bool prime[N];
ll pre[N];
void seive(){
    prime[0]=prime[1]=1;
    for(ll i=2;i<N;i++){
        if(prime[i]==0){
            for(ll j=i*i;j<N;j+=i)prime[j]=1;
        }
    }

    for(int i=1;i<N;i++){
        if(prime[i]==0)pre[i]=i;
        pre[i]+=pre[i-1];
    }


}

signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    seive();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<pre[n]<<'\n';
    }

    return 0;
}

