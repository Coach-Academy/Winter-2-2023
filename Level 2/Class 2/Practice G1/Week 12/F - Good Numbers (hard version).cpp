#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e18+5;
vector<ll>pw;
void init()
{
    ll sum=1;
    while(sum<N)
    {
        pw.push_back(sum);
        sum*=3;
    }
    pw.push_back(sum);
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    init();
    int t;cin>>t;while(t--)
    {
        ll n;cin>>n;
        ll sum=0;
        for(int i=0;i<pw.size();i++)
        {
            if(sum<=n)
            {
                sum+=pw[i];
            }
        }
        for(int i=pw.size()-1;i>=0;i--)
        {
            if(sum-pw[i]>=n)
            {
                sum-=pw[i];
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}
