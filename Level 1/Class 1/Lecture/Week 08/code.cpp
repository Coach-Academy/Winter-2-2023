#include <bits/stdc++.h>


using namespace std;

int main()
{
    /// array
  /*  int t;
    cin>>t;
    vector<long> v2;

    while(t--)
    {*/


   /* int a[10000];


    [3,5,45345345,656564]
    for(int i=0 ; i<9 ; i++)
        cin>>a[i];

    for(int i=0 ; i<9 ; i++)
        cin>>a[i];

    for(int i=0 ; i<9 ; i++)
        cout<<a[i]<<" ";*/


        /// Vector
       // vector<int>v;
       /* vector<int>v2(5);
        vector<int>v3(5,1);

        for(int i=0 ; i<5 ; i++)
        {
            cout<<v2[i]<<" ";
        }*/
      //  vector<int> v2={10,20,30};



       /* int n,x;
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            v.push_back(x);
        }*/
        //v.erase(v.begin()+3);
     /* while(!v.empty())
      {
          cout<<v.back();
          v.pop_back();
      }*/
       /* v.pop_back();
       v.erase(v.begin()+3)
        for(int i=0 ; i<v.size() ; i++)
        {
            cout<<v[i]<<"\n";
        }*/

        /*v2.clear();
    }*/

  /*  vector<int>v1(3,1);
    vector<int>v2(3,5);
    for(int i=0 ; i<v1.size() ; i++)
        swap(v1[i],v2[i]);
    swap(v1,v2);
    cout<<v2[0];
    v1.swap(v2);*/


   /* for(auto a:v)
        cout<<a<<" ";*/
   /* vector<int>::reverse_iterator it=v.rbegin();
    while(it!=v.rend())
    {
        cout<<*it;
        it+=1;
    }*/

    /// problem Array O(n)

    /*int n,x,neg=0,pos=0;
    cin>>n;
    vector<int> Zeros;
    for(int i=0 ; i<n  ;i++)
    {
        cin>>x;
        if(x<0 && neg==0)
        {
            neg=x;
        }
        else if(x>0 && pos==0)
        {
            pos=x;
        }
        else
        {
            Zeros.push_back(x);
        }
    }

    if(pos==0)
    {
        vector<int>p;
        vector<int> z;
        for(int i=0 ; i<Zeros.size() ; i++)
        {
           if(Zeros[i]<0 && p.size()<2)
           {
               p.push_back(Zeros[i]);
           }
           else
           {
               z.push_back(Zeros[i]);
           }
        }

        cout<<1<<" "<<neg<<"\n";
        cout<<2<<" "<<p[0]<<" "<<p[1]<<"\n";
        cout<<z.size();
        for(int i=0 ; i<z.size() ; i++)
            cout<<" "<<z[i];



    }
    else
    {
        cout<<1<<" "<<neg<<"\n";
        cout<<1<<" "<<pos<<"\n";
        cout<<Zeros.size();
        for(int i=0 ; i<Zeros.size() ; i++)
            cout<<" "<<Zeros[i];
    }
   */

   /// problem Ada and Queue
   int n,num,f=1;
   string s;
   deque<int> dq;
   cin>>n;
   while(n--)
   {
       cin>>s;
     //  cout<<s<<"\n";
       if(s=="toFront")
       {
          // cout<<s<<"\n";
           cin>>num;
           if(f)
             dq.push_front(num);
           else
             dq.push_back(num);



       }
       else if(s=="push_back")
       {
           cin>>num;
           if(f)
             dq.push_back(num);
          else
             dq.push_front(num);


       }
       else if(s=="front")
       {
           //cout<<s;
           if(dq.empty())
            cout<<"No job for Ada?\n";
           else
           {
            if(f)
            {
            cout<<dq.front()<<"\n";
            dq.pop_front();
            }
            else
            {
            cout<<dq.back()<<"\n";
            dq.pop_back();
            }
           }
       }
       else if(s=="back")
       {
           if(dq.empty())
            cout<<"No job for Ada?\n";
           else
           {
            if(f)
            {


            cout<<dq.back()<<"\n";
            dq.pop_back();
            }
            else
            {
            cout<<dq.front()<<"\n";
            dq.pop_front();
            }
           }
       }
       else if(s=="reverse")
       {
           f=!f;
       }


   }



    return 0;
}
