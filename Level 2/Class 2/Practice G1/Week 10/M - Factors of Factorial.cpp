#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+5;
vector<bool> isPrime(N,true);ll sum[N];
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
}
ll calc(ll n,ll p)
{
    ll ret=0,x=p;
    while(x<=n)
    {
        ret+=n/x;
        x*=p;
    }
    return ret;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    ll n;cin>>n;
    ll ans=1;
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            ans*=calc(n,i)+1;
            ans%=1000000007;
        }
    }
    cout<<ans;
    return 0;
}
