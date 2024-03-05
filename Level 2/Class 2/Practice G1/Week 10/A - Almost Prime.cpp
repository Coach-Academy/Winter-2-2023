#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,int>>primeDivisors(ll n)
{
    vector<pair<ll,int>>ret;
    for(ll i=2;i*i<=n;i++)
    {
        int c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        if(c>0)
        {
            ret.push_back({i,c});
        }
    }
    if(n!=1)
    {
        ret.push_back({n,1});
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll ans=0;
    for(int i=2;i<=n;i++)
    {
        if(primeDivisors(i).size()==2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
