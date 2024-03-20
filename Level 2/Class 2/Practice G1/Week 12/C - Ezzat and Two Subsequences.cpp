#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        ll s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        double ans=s[n-1];
        double avr=0;
        for(int i=0;i<n-1;i++)
        {
            avr+=s[i];
        }
        cout<<fixed<<setprecision(6)<<ans+avr/(n-1)<<'\n';
    }
    return 0;
}
