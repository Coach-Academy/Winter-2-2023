#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e3+5;
int ans[N];
void init()
{
    int idx=1;
    for(int i=1;idx<N;i++)
    {
        if(i%3==0||i%10==3) continue;
        ans[idx]=i;
        idx++;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    init();
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        cout<<ans[n]<<'\n';
    }
    return 0;
}
