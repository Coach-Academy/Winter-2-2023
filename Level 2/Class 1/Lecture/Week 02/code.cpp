#include <bits/stdc++.h>

using namespace std;



int main()
{

   /* f       b
    10 6 2 3 4


   set<int>s;
   s.insert(4);



  // pair<std::set<int>::iterator,bool> it= s.insert(5);

   /* cout<<it.second;
    cout<<*s.rbegin();*/

   /* int c=s.erase(4);
    cout<<c;








map<string,int> fruits;

fruits["Apple"] = 10;

// key is string and value is int

fruits["Orange"] = 2;


// another way to add value to map

fruits.insert({"Banana", 6});

cout << fruits["Apple"]; //prints 10

cout << fruits["Avocado"]; //prints 0

fruits.erase("Orange");

fruits["Apple"] = 9;

map<string,int>:: iterator it = fruits.find("Apple");

if (it != fruits.end())

cout << it->first << " " << it->second << endl;*/

/*
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(5);
cout<<pq.top()<<"\n";
pq.push(10);
cout<<pq.top()<<"\n";
pq.pop();
cout<<pq.top()<<"\n";
*/


//pair<string,int> p;

//p=make_pair("ahmed",21);
//p={"mohamed",30};

//cout<<p.first<<" "<<p.second<<"\n";
/*
set<int> st;
st.insert(5);

set<int>::iterator it=st.find(5);


if(it==st.end())
{
    cout<<"Not found";
}

st.begin(), st.rbegin(), st.end()





  ms.erase(ms.find(5))

  cout<<it->first<<" "<<*it.second*/
  
  
  
  
  /// Problem priority queue
  
  /*int n,x,c=0;
long long int health=0;
cin>>n;
priority_queue<int,vector<int>,greater<int> > pq;
while(n--)
{
    cin>>x;
    health+=x;
    c++;

    if(x<0)
    {
        pq.push(x);
    }
    if(health<0)
    {
        health-=pq.top();
        c--;
        pq.pop();
    }
}
cout<<c;*/
  
  
  
  /// probelm cancel trains

 /* int t,n,m,x,res;
  cin>>t;

  while(t--)
  {
      res=0;
      cin>>n>>m;
      set<int>s;
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





    return 0;
}
