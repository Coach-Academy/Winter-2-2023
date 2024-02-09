#include <bits/stdc++.h>

using namespace std;




long long upperBoundd(int a[],int N, int x)
{
    long long mid;
    long long low=0,high=N-1;

    while(low<=high)
    {
        mid=low+(high-low)/2;

        if(x>=a[mid])
        {
           low=mid+1;
        }
        else
        {
            high=mid-1;
        }




    }
     return low;


}




int main()
{


///problem Bashar and the bad land (Hard)
   /* int n,x,a[100001];
    cin>>n>>x;

    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    int j=0;
    long long sum=0;
    int mn=INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
      while(j<n && sum<x )
      {
          sum+=a[j];
          j++;
      }

      if(sum>=x)
      {
          mn=min(mn,j-i);
      }
      if(sum<x && j==n)
        break;



      sum-=a[i];
    }
    cout<<(mn==INT_MAX?-1:mn);*/


   /// problem Queries about less or equal elements
 /* int a,b;
  cin>>a>>b;
  int x[200002],y[200002];
  for(int i=0 ; i<a ; i++)
    cin>>x[i];

   sort(x,x+a);

  for(int j=0 ; j<b;  j++)
    cin>>y[j];

  for(int i=0 ; i<b ; i++)
    cout<<upperBoundd(x,a,y[i])<<" ";*/




    return 0;
}
