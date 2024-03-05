#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
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
    sieve();
    int t;cin>>t;while(t--)
    {
        int idx;cin>>idx;
        cout<<p[idx-1]<<'\n';
    }
    return 0;
}
