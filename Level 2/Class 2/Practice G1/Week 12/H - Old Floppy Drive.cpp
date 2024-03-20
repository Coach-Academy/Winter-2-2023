#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n,q;cin>>n>>q;
        ll s[n],sum=0,mx=-1e12;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            sum+=s[i];
            mx=max(mx,sum);
            s[i]=mx;
        }
        while(q--)
        {
            ll x;cin>>x;
            if(x<=s[n-1])
            {
                cout<<lower_bound(s,s+n,x)-s<<' ';
            }
            else
            {
                if(sum<=0)
                {
                    cout<<-1<<' ';
                }
                else
                {
                    ll c=(x-s[n-1]+sum-1)/sum;
                    x-=c*sum;
                    cout<<lower_bound(s,s+n,x)-s+c*n<<' ';
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}
