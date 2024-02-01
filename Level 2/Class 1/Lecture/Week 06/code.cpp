#include <bits/stdc++.h>

using namespace std;

bool com(pair<int,int> &i,pair<int,int> &j)
{
    return i.second<j.second;
}

bool com2(pair<int,int>i , pair<int,int>j)
{
    return i.second<j.second || (i.second==j.second && i.first<j.first);
}




int main()
{
    /// problem A
    /*
  int n;
  cin>>n;
  pair<int,int> orders[500000];

  for(int i=0 ; i<n ; i++)
  {
      cin>>orders[i].first>>orders[i].second;
  }

  sort(orders,orders+n,com);

  int last=-1,ans=0;
  for(int i=0 ; i<n ; i++)
  {
      if(orders[i].first>last)
      {
          last=orders[i].second;
          ans++;
      }
  }
  cout<<ans<<endl;*/

  /// problem B
  /*pair<int,int> markers[100001],caps[100001];
  int n,m;
  cin>>n>>m;
  for(int i=0 ; i<n ; i++)
  {
      cin>>markers[i].first>>markers[i].second;
  }
  for(int j=0 ; j<m  ;j++)
  {
      cin>>caps[j].first>>caps[j].second;
  }
  sort(markers,markers+n,com2);
  sort(caps,caps+m,com2);

  int u=0,v=0;
  for(int i=0, j=0 ; i<n && j<m;)
  {
      if(markers[i].second>caps[j].second)
      {
          j++;
      }
      else if(markers[i].second<caps[j].second)
      {
          i++;
      }
      else
      {
          u++;
          i++;
          j++;
      }
  }


  for(int i=0, j=0 ; i<n && j<m;)
  {
      if(markers[i].second>caps[j].second)
      {
          j++;
      }
      else if(markers[i].second<caps[j].second)
      {
          i++;
      }
      else
      {
          if(markers[i].first<caps[j].first)
          {
              i++;
          }
          else if(markers[i].first>caps[j].first)
            j++;
          else
          {
            i++;
            j++;
            v++;
          }
      }
  }

  cout<<u<<" "<<v<<endl;
  */



  ///problem C

  int t;
  cin>>t;
  while(t--)
  {
     map<int ,int > m;
     int n,a,dist=INT_MAX;
     cin>>n;
      for(int i=1 ; i<=n ; i++)
      {
          cin>>a;
          if(m[a]!=0 && dist>i-m[a]+1)
          {
              dist=i-m[a]+1;
          }
          m[a]=i;
      }


      if(n<2 || dist==INT_MAX )
        cout<<-1<<"\n";
      else
        cout<<dist<<"\n";








  }








    return 0;
}
