#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>> primeFactorze(ll n)
{
    vector<pair<ll,ll>> arr;
    for(ll i=2;i*i<=n;i++)
    {
        int w=0;
        while(n%i==0)
        {
            w++;
            n/=i;
        }
        if(w)arr.push_back({i,w});
    }
    if(n>1)arr.push_back({n,1});
    return arr;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        vector<pair<ll,ll>>v= primeFactorze(n);
        ll p=v[0].first,mx=v[0].second;
        for(auto[a,b]:v)
        {
            if(b>mx)
            {
                mx=b;
                p=a;
            }
        }
        cout<<mx<<'\n';
        while(--mx)
        {
            cout<<p<<' ';
            n/=p;
        }
        cout<<n<<'\n';
    }
    return 0;
}
