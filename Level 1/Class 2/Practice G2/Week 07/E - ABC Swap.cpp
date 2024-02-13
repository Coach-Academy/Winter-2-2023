#include<bits/stdc++.h>
using namespace std;
#define ll long long
void MySwap(ll &a,ll &b)
{
    b=a+b;
    a=b-a;
    b=b-a;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll a,b,c;cin>>a>>b>>c;
    MySwap(a,b);
    MySwap(a,c);
    cout<<a<<' '<<b<<' '<<c;
    return 0;
}
