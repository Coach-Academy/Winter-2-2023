#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_perfrct_square(ll n)
{
    ll x=(ll)sqrtl(n);
    while(x*x<n) x++;
    while(x*x>n) x--;
    return x*x==n;
}
bool is_prime(ll n)
{
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        if(is_perfrct_square(n)&&is_prime(sqrtl(n)))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
