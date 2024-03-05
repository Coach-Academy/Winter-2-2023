#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
ll d[N];
void sieve()
{
    for(int i=1;i<N;i++)
    {
        for(int o=i;o<N;o+=i)
        {
            d[o]++;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    ll a,b,c;cin>>a>>b>>c;
    ll ans=0;
    for(ll i=1;i<=a;i++)
    {
        for(ll o=1;o<=b;o++)
        {
            for(ll j=1;j<=c;j++)
            {
                ans+=d[i*o*j];
                ans%=1073741824;
            }
        }
    }
    cout<<ans;
    return 0;
}
