#include <bits/stdc++.h>


using namespace std;

int main()
{

  //pair<int,string> x;
  /*x.first=5;
  x.second="ahmed";*/

  //x=make_pair(7,"mohamed");
 /* x={16,"Omar"};
  cout<<x.second;

  a={5,4,5,5,5,4,7,8,9};
  s ={5,4,7,8,9}*/

  /*set<int> s;
  s.insert(5);
  s.insert(3);
  s.insert(10);
  s.insert(3);*/
 // a[2.5]





 /* for(auto it=s.begin() ; it!=s.end() ; it++)
  {
      cout<<*it<<" ";
  }*/

  /*for(auto it:s)
    cout<<it<<" ";*/

   /* map<string,int> mp;

    mp["ahmed"]=10;
    mp.insert({"mohamed",20});
    mp["ahmed"]=100;

    cout<<mp["ali"]<<" ";

    auto it=mp.find("ali");

   // cout<<(*it).first<<" "<<it->second;

   for( auto it=mp.begin() ; it!=mp.end() ; it++)
   {
       cout<<(it->first)<<" "<<(it->second)<<"\n";
   }

   for(auto it:mp)
   {
       cout<<it.first<<" "<<it.second<<"\n";
   }


   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       mp[x]++;
   }

   cout<<mp[x];


   mp.lower_bound(mp.begin(),mp.end(),x)*/


   /// problem: Cancel the Trains
  /* int t,n,m,x,res;
   cin>>t;
   while(t--)
   {
       set<int> s;
       cin>>n>>m;
       res=0;
       for(int i=0 ; i<n ; i++)
       {
           cin>>x;
           s.insert(x);
       }
       for(int i=0 ; i<m ; i++)
       {
           cin>>x;
           if(s.find(x)!=s.end())
           {
               res++;
           }

       }
       cout<<res<<"\n";



   }*/
  /// O(NlogN);

  map<string,int>mp;
  int n;
  cin>>n;
  string name;
  while(n--)
  {
      cin>>name;
      if(mp.find(name)==mp.end())
      {
          cout<<"OK\n";
          mp[name]=1;
      }
      else
      {
          cout<<name<<mp[name]<<"\n";
          mp[name]++;
      }
  }
  ///O(nlogn)








    return 0;
}
