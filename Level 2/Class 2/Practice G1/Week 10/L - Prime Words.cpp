#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e4+5;
vector<bool> isPrime(N,true);ll sum[N];
void sieve()
{
    isPrime[0] = false;
    isPrime[1] = 1;
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
    string s;while(cin>>s)
    {
        ll sum=0;
        for(auto it:s)
        {
            if(isupper(it)) sum+=it-'A'+27;
            else sum+=it-'a'+1;
        }
        if(isPrime[sum])
        {
            cout<<"It is a prime word.\n";
        }
        else
        {
            cout<<"It is not a prime word.\n";
        }
    }
    return 0;
}
