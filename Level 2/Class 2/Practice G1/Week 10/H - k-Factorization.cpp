#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>primeFactors(ll n)
{
    vector<ll>ret;
    for(ll i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            n/=i;
            ret.push_back(i);
        }
    }
    if(n!=1)
    {
        ret.push_back(n);
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,k;cin>>n>>k;
    vector<ll>v=primeFactors(n);
    if(v.size()<k)
    {
        cout<<-1;
    }
    else
    {
        for(int i=0;i<k-1;i++)
        {
            n/=v[i];
            cout<<v[i]<<' ';
        }
        cout<<n<<'\n';
    }
    return 0;
}
