#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
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
void init()
{
    for(int i=1;i<N;i++)
    {
        sum[i]=sum[i-1]+isPrime[i]*i;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    init();
    int t;cin>>t;while(t--)
    {
        int idx;cin>>idx;
        cout<<sum[idx]<<'\n';
    }
    return 0;
}
