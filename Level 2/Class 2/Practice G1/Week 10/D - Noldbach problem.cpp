#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+5;
vector<bool> isPrime(N,true);vector<int>p;
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
    int n,k;cin>>n>>k;
    sieve();
    int ans=0;
    for(int i=1;i<p.size();i++)
    {
        int sum=p[i]+p[i-1]+1;
        if(isPrime[sum]&&sum<=n)
        {
            ans++;
        }
    }
    if(ans<k)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
