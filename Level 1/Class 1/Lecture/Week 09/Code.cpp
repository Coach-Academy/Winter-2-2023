#include <bits/stdc++.h>

using namespace std;

int main()
{


 /*
    swap(x,y) y x
    swap(v1,v2)
    v1[0] v2[0]
    v1[1]  v2[1]

    .
    .
    .

    v.swap(v)*/


   /* vector<int> v1;
    v1.push_back()
    1 2 3 4 5

    auto it=v1.emplace(v.begin(),15);*/

    ///stack

  //  vector<int>v(5,0);
/*
    stack<int> st;



    for(int i=0 ; i<5 ; i++)
        st.push(i*10);

    cout<<st.size()<<"\n";

     stack<int> st2;
    while(!st.empty())
    {
        cout<<st.top()<<"\n";
        st2.push(st.top());
        st.pop();
    }*/

    /// queue

  /*  queue<int>q;

    for(int i=0 ; i<5; i++)
        q.push(i*10);

    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";
    queue<int>q2;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q2.push(q.front());
        q.pop();
    }*/

    /// priority queue

    /*priority_queue<int>pq;

    priority_queue<int, vector<int>, greater<int> > pq2;

    pq.push(5);
    pq.push(10);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();*/

    ///probelm 1
   /* int n,d,x;
    cin>>n>>d;
    queue<int>q;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        q.push(x);
    }
    for(int i=0 ; i<d ; i++)
    {
        q.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }*/

    //O(n)






    ///problem 2

    /*int t,x,n;

    scanf("%d",&t);
    stack<int> st;
    while(t--)
    {
        scanf("%d",&x);

        if(x==1)
        {
            scanf("%d",&n);
            st.push(n);
        }
        else if(x==2)
        {
              if(!st.empty())
                 st.pop();
        }
        else
        {    if(!st.empty())
                printf("%d\n",st.top());
            else
                printf("Empty!\n");
        }


    }*/
    //O(N)


    /// problem 3


    //12 -12 -1 -1 -1 5
    int n,x,c=0;
    long long health=0;
    cin>>n;
    priority_queue<int ,vector<int>,greater<int> > pq;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;

        if(x<0)
        {
            pq.push(x);
        }

        health+=x;
        c++;

        if(health<0)
        {
            health-=pq.top();
            pq.pop();
            c--;
        }
    }
    cout<<c;
    /// O(nlogn)















    return 0;
}
