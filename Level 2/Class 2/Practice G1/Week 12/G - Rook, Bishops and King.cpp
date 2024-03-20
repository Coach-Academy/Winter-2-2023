#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
    cout<<(r1!=r2)+(c1!=c2)<<' ';
    if(((r1+c1)%2)!=((r2+c2)%2))
    {
        cout<<0<<' ';
    }
    else
    {
        int i=r1,j=c1;
        while(i<=8&&j<=8&&(i!=r2||j!=c2)) i++,j++;
        if(i==r2&&j==c2)
        {
            cout<<1<<' ';
            goto done;
        }
        i=r1,j=c1;
        while(i>=1&&j>=1&&(i!=r2||j!=c2)) i--,j--;
        if(i==r2&&j==c2)
        {
            cout<<1<<' ';
            goto done;
        }
        i=r1,j=c1;
        while(i>=1&&j<=8&&(i!=r2||j!=c2)) i--,j++;
        if(i==r2&&j==c2)
        {
            cout<<1<<' ';
            goto done;
        }
        i=r1,j=c1;
        while(i<=8&&j>=1&&(i!=r2||j!=c2)) i++,j--;
        if(i==r2&&j==c2)
        {
            cout<<1<<' ';
            goto done;
        }
        cout<<2<<' ';
        done:{};
    }
    cout<<max(abs(r1-r2),abs(c1-c2));
    return 0;
}
