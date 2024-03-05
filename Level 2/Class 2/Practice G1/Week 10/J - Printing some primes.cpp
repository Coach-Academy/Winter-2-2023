#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e8+5;
vector<bool> isPrime(N,true);
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
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int c=-1;
    for(int i=1;i<=1e8;i++)
    {
        if(isPrime[i])
        {
            c++;
            if(c%100==0)
            {
                cout<<i<<'\n';
                c=0;
            }
        }
    }
    return 0;
}
