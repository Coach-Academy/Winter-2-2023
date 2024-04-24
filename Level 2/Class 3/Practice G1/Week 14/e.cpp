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
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        if(vec[0][0]=='1')cout<<"-1\n";
        else {
            vector<pair<int, int>> xy1, xy2;
            for (int i = n - 1; i > 0; i--) {
                for (int j = m - 1; j >= 0; j--) {
                    if (vec[i][j] == '1') {
                        xy1.push_back({i - 1, j});
                        xy2.push_back({i, j});
                    }
                }
            }

            for (int i = m - 1; i > 0; i--) {
                if (vec[0][i] == '1') {
                    xy1.push_back({0, i - 1});
                    xy2.push_back({0, i});
                }
            }

            cout<<xy1.size()<<'\n';
            for(int i=0;i<xy1.size();i++)cout<<xy1[i].first+1<<' '<<xy1[i].second+1<<' '<<xy2[i].first+1<<' '<<xy2[i].second+1<<'\n';

        }

    }

    return 0;
}

