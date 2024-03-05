#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
vector<bool> isPrime(N,true);vector<ll>p;
void sieve()
{
    isPrime[0] = false;
    isPrime[1] = false;
    for(ll i=2;i*i<N;i++)
    {
        if(isPrime[i])
        {
            for(ll j=i*i;j<N;j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    p.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(isPrime[i])
        {
            p.push_back(i);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int n,m;cin>>n>>m;
    ll s[n][m];
    for(int i=0;i<n;i++)
    {
        for(int o=0;o<m;o++)
        {
            cin>>s[i][o];
        }
    }
    ll ans=1e15;
    for(int i=0;i<n;i++)
    {
        ll sum=0;
        for(int o=0;o<m;o++)
        {
            ll x=*lower_bound(p.begin(),p.end(),s[i][o]);
            sum+=x-s[i][o];
        }
        ans=min(ans,sum);
    }
    for(int i=0;i<m;i++)
    {
        ll sum=0;
        for(int o=0;o<n;o++)
        {
            ll x=*lower_bound(p.begin(),p.end(),s[o][i]);
            sum+=x-s[o][i];
        }
        ans=min(ans,sum);
    }
    cout<<ans;
    return 0;
}
