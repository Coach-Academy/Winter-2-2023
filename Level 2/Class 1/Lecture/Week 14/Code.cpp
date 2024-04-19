#include<bits/stdc++.h>
using namespace std;

int fact(int x)5
{
    if(x==0)
        return 1;
    
    return x*fact(x+1);
}
/// O(n) 
/// O(n)
5 4 3 2 1 2 3 4 5 

/// base condition - movement - direction - meet base



int main()
{
    
    cout<<fact(5);
    
    /// problem Tanya and Stairways
  /* int n,first,second;
   cin>>n;
   vector<int>ans;
   cin>>first;
   for(int i=1 ; i<n ; i++)
   {
       cin>>second;
       if(second==1)
       {
           ans.push_back(first);

       }
       first=second;

   }
   ans.push_back(first);

   cout<<ans.size()<<"\n";
   for(int i=0 ; i<ans.size() ; i++)
   {
       cout<<ans[i]<<" ";
   }*/
   /// O(n)

   /// problem Quality vs Quantity

  /* int t,n;
   long long sumR=0,sumB=0;
   cin>>t;
   while(t--)
   {
       sumR=0;
       sumB=0;
       cin>>n;
       vector<int>v(n);
       for(int i=0 ; i<n ; i++)
        cin>>v[i];


       sort(v.begin(),v.end(),greater<int>());

       for(int i=0 ; i<(n/2)-1 ; i++)
       {
           sumR+=v[i];
       }
       for(int i=n/2 ; i<n ; i++)
       {
           sumB+=v[i];
       }
       if(n%2==1)
       {
           sumR+=v[n/2-1];
       }
       if(sumR>sumB)
          cout<<"YES\n";
       else
          cout<<"NO\n";
          */
       /// O(nlogn)

       /// probelm Rooms and Staircases
      /* int t,n;
       cin>>t;
       while(t--)
       {
           int f=-1,l=-1;
           string s;
           cin>>n>>s;
           for(int i=0 ; i<s.size(); i++)
           {
               if(s[i]=='1')
               {
                    l=i;
               }

               if(s[i]=='1' && f==-1)
               {
                   f=i;
               }
           }
           if(f==-1)
           {
               cout<<n<<"\n";
           }
           else{

             cout<<(2*max(n-f,l+1))<<"\n";
           }

       }*/
       /// O(n)

       /// problem Delete from the Left

      /* string s,t;
       cin>>s>>t;
       int ans=s.length()+t.length();

       int l1=s.length()-1;
       int l2=t.length()-1;

       while( l2>=0 && l1>=0 && s[l1]==t[l2])
       {
           ans-=2;
           l1--;
           l2--;
       }
       cout<<ans<<"\n";*/
       ///O(n)

















    return 0;
}

