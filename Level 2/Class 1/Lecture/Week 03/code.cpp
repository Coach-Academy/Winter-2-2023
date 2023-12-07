#include <bits/stdc++.h>

using namespace std;




int main()
{


    /*int a[10],freq[50]={0};

    for(int i=0 ; i<9 ; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }

    for(int i=0 ; i<50 ;i++)
    {
        cout<<freq[i]<<" ";
    }*/
    /*
    string s;
    cin>>s;
    int freq[200]={0};
    int cnt=0;
    for(int i=0 ; i<s.length() ; i++)
    {
       freq[s[i]-'a']++;
       if(0==freq[s[i]-'a']++)
        cnt++;
    }

    for(int i=0 ; i<26 ; i++)
    {
       if(freq[i]==0)
       {
           cout<<"Not panagram";
           return 0;
       }
    }
    cout<<"panagram";*/


   /* int n,x,sum=0,mx=0;
    cin>>n;

    int a[n+1]={};
    for(int i=0 ; i<2*n;i++)
    {
        cin>>x;
        if(a[x]==1)
        {
            a[x]--;
            sum--;
        }else{
          a[x]++;
          sum++;

        }

        if(sum>mx)
            mx=sum;

    }
    cout<<mx;*/
    ///O(n)

   /* string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int freq[256]={0};
    for(int i=0 ; i<s1.length() ;i++ )
    {
        freq[int(s1[i])]++;

    }
    //freq[int(' ')]=99999;
    for(int i=0 ; i<s2.length() ; i++)
    {
        if(s2[i]==' ')
            continue;

        if(freq[s2[i]]==0)
        {
            cout<<"NO";
            return 0;
        }

        freq[s2[i]]--;

    }
    cout<<"YES";*/
    /// O(n)


    /*int n;
    cin>>n;
    int a[100],prev_min[100]={0},mn=999999;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        //prev_sum[i]=a[i];
        mn=min(mn,a[i]);
        prev_min[i]=mn;
    }
   for(int i=0 ; i<n ; i++)
   {
       cout<<prev_min[i]<<" ";
   }*/

  /* int n,q,a[100001],l,r;
   int prev[100001];
   cin>>n;
   for(int i=0 ; i<n  ;i++)
   {
    cin>>a[i];
    prev[i]=a[i];
    if(i)
    {
        prev[i]+=prev[i-1];
    }
   }
   cin>>q;
   while(q--)
   {
       cin>>l>>r;
       if(l)
        cout<<prev[r]-prev[l-1]<<"\n";
       else
        cout<<prev[r]<<"\n";
   }*/
   ///O(q+n)

   int n,k,q,l,r;
   cin>>n>>k>>q;
   int c[200001]={0};
   for(int i=0 ; i<n ; i++)
   {
       cin>>l>>r;
       l--;
       r--;
       c[l]++;
       c[r+1]--;
   }

   int a[200001]={0};
   if(c[0]>=k)
    a[0]=1;
   for(int i=1 ; i<200001 ; i++)
   {
       c[i]+=c[i-1];
       if(c[i]>=k)
       {
           a[i]=1;
       }
   }
   for(int i=1 ; i<200001 ; i++)
   {
       a[i]+=a[i-1];
   }

   for(int i=0 ; i<q ; i++)
   {

   cin>>l>>r;
   l--;
   r--;
   if(l)
    cout<<a[r]-a[l-1]<<"\n";
   else
    cout<<a[r]<<"\n";
   }
   ///O(n)
















    return 0;
}
