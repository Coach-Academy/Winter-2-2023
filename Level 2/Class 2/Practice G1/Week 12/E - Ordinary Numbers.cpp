#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+5;
vector<int>v;
void init()
{
    for(int i=1;i<=9;i++)
    {
        ll temp=i;
        while(temp<N)
        {
            v.push_back(temp);
            temp*=10;
            temp+=i;
        }
    }
    sort(v.begin(),v.end());
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    init();
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        cout<<upper_bound(v.begin(),v.end(),n)-v.begin()<<'\n';
    }
    return 0;
}
