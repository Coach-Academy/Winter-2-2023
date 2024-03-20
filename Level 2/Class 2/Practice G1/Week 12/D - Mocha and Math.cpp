#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int ans=-1;
        while(n--)
        {
            int x;cin>>x;
            ans&=x;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
