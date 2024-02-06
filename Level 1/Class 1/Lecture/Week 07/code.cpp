#include <bits/stdc++.h>

using namespace std;

int main()
{


    ///

    /*int a,b;
    cin>>a>>b;
    cout<<a+b;*/
    ///O(1)

    /*int n;
    cin>>n;
    for(int i=1 ; i<=n ; i*=2)
    {
        cout<<i<<" ";
    }*/
    ///O(log2(n))

   /*

    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
        cout<<i;




        */

    ///O(n)



   /* for(int i=1 ; i<=n ; i*=2)
    {
        for(int i=0 ; i<n ; i++)
        cout<<i;
    }*/
    ///(nlogn)



   /* int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<n ; j++)
        cout<<i*j<<"\n";*/



    ///O(n*n)


  /* int n,m;
   cin>>n>>m;

   for(int i=0 ; i<n ; i++)
    for(int j=0 ; j<m ; j++)
      cout<<i*j<<"\n";*/

   ///O(n*m)


    ///O(2^n)
     /*n 20  200000
    n*n 100 1000000000000000*/

   /* int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<n ; j++)
            for(int k=0 ; k<n ; k++)
                cout<<i*j*k<<"\n";*/



   ///O(n^3)



  /* int n;
   cin>>n;
   for(int i=1 ; i<=n ; i+=3)
    cout<<i<<" ";

    ///O(n)

     for(int i=1 ; i<=2*n ; i++)
    cout<<i<<" ";

    ///O(n)*/

   /*
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<n ; j++)
            for(int k=0 ; k<n ; k++)
                cout<<i*j*k<<"\n";




    for(int j=0 ; j<n ; j++)
            for(int k=0 ; k<n ; k++)
                cout<<i*j*k<<"\n";

    O(n^3)

  */

/*  int a[10];
  int n;
  cin>>n;
  for(int i=0 ; i<10 ; i++)
  {
    a[i]=i;
    cout<<a[i]<<"\n";
  }*/

  ///O(1)


  /*int n;
  cin>>n;
  int a[n];
  for(int i=0 ; i<n ; i++)
  {
    a[i]=i;
    cout<<a[i]<<"\n";
  }*/
 // 0 0 0 0 0
  ///O(n)

/*  int n;
  cin>>n;
  int a[n][n];
  for(int i=0 ; i<n ; i++)
  {
      for(int j=0 ; j<n ;j++)
    a[i][j]=i;
    cout<<a[i]<<"\n";
  }
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0

  ///O(n^2)*/


  ///problem (Children and Candies (ABC Edit))
  /*int k;
  cin>>k;
  int sum=0;
 /* for(int i=1 ; i<=k ; i++)
     sum+=i;*/

 /* sum=(k*(k+1))/2;
  cout<<sum;*/
  ///O(1)

  ///problem Again Twenty Five!

  long long n;
  cin>>n;
  /*long long sum=1;
  for(int i=0 ; i<n ;i++)
    sum*=5;


  cout<<sum%100;*/
  cout<<25;

  ///O(1)


















    return 0;
}
