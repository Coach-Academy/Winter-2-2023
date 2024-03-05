#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
int pf[N];vector<int>num[11];
void sieve()
{
    for(int i=2;i<N;i++)
    {
        if(pf[i]==0)
        {
            for(int o=i;o<N;o+=i)
            {
                pf[o]++;
            }
        }
    }
    for(int i=1;i<N;i++)
    {
        if(pf[i]<11)
        {
            num[pf[i]].push_back(i);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int t;cin>>t;while(t--)
    {
        int a,b,n;cin>>a>>b>>n;
        cout<<upper_bound(num[n].begin(),num[n].end(),b)-lower_bound(num[n].begin(),num[n].end(),a)<<'\n';
    }
    return 0;
}
