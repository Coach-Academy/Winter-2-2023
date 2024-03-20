#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int l,r;cin>>l>>r;
        cout<<r%max(l,r/2+1)<<'\n';
    }
    return 0;
}
