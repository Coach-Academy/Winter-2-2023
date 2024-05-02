#include <bits/stdc++.h>

using namespace std;


int main()
{
    /// problem Single Push
    /*
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;

      int a[100002],diff[100002]={0},b;
      for(int i=1 ; i<=n ; i++)
      {
          cin>>a[i];
      }
      for(int i=1 ; i<=n ; i++)
      {
          cin>>b;
          diff[i]=b-a[i];
      }

      int cnt=0,f=1;


      for(int i=0 ;i<=n ; i++)
      {
          if(diff[i]<0)
          {
              f=0;
              break;
          }
          if(diff[i]!=diff[i+1])
          {
              cnt++;
          }
      }

      if(n==1 && diff[0]<0)
        cout<<"NO\n";
      else if(f==1 && cnt<=2)
        cout<<"YES\n";
      else
        cout<<"NO\n";

    /// O(n)




  }*/
/// problem Stack of Presents
 /* int t;
  cin>>t;

  while(t--)
  {
      int n,m,x,b,id=0;
      long long ans=0;
      cin>>n>>m;
      int a[n];

      map<int,int>mp;
      for(int i=0 ; i<n ; i++)
      {
          cin>>a[i];
          mp[a[i]]=i+1;
      }

      for(int i=1 ; i<=m ; i++)
      {
          cin>>x;
          b=mp[x];

          if(id>b)
          {
              ans++;
          }
          else
          {
          ans+=2*(b-i)+1;
          id=b;
          }


      }
      cout<<ans<<"\n";
      /// O(nlogn)*/


   /// Pashmak and Flowers
    /* long long  n,d,a=1,b=1;
     cin>>n;

     int f[200002];
     for(int i=0 ; i<n ; i++)
        cin>>f[i];

     sort(f,f+n);
     d=f[n-1]-f[0];

     if(f[0]==f[n-1])
     {
         cout<<d<<" "<<n*(n-1)/2<<"\n";
     }
     else{


     for(int i=1 ; i<n-1 ; i++)
     {
         if(f[i]==f[n-1])
            b++;
         else if(f[i]==f[0])
            a++;

     }


     cout<<d<<" "<<a*b<<"\n";
     }*/
     /// O(nlogn)

     /// problem Sum vs XOR

     /// a+b=a^b+2(a&b)

     long long n;
     cin>>n;
     int bits=floor(log2(n))+1;
     int ones=__builtin_popcountll(n);
     int zeros=bits-ones;
     long long ans= 1ll<<zeros;
     cout<<ans;
     ///log(n)















return 0;



    }
