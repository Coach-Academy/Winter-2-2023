#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
vector<int> get_divisors(int n) {
 
    vector<int> divisors;
 
    for (int i = 1; i*i  <= n; ++i) {
 
        if (n % i == 0) {
 
            divisors.push_back(i);
 
            if (i != n / i)
 
                divisors.push_back(n / i);
 
        }
 
    }
 
    return divisors;
}
 
int cnt=0;
vector<pair<int, int>> factorize(int n) {
 
    vector<pair<int, int>> factors;
 
    for (int i = 2; i * i <= n; ++i) {
 
        int power = 0;
 
        while (n % i == 0) {
 
            ++power;
            cnt++;
 
            n /= i;
 
        }
 
        if (power > 0)
 
            factors.emplace_back(i, power);
 
    }
 
    if (n != 1)
    {
 
        cnt++;
        factors.emplace_back(n, 1);
    }
 
    return factors;
 
}
 
int main()
{
    /// problem k-Factorization
 /*  int n,k;
   cin>>n>>k;
   vector<pair<int,int>> p=factorize(n);
 
   if(cnt<k)
   {
       cout<<-1;
   }
   else
   {
 
 
       int mul=1;
       int flag=0;
     for(int i = 0; i<p.size() ; i++)
     {
         for(int j=0; j<p[i].second ; j++)
         {
             if(k==1)
             {
                flag=1;
                break;
 
             }
 
             cout<<p[i].first<<" ";
             mul*=p[i].first;
 
             k--;
 
         }
         if(flag)
            break;
     }
     cout<<n/mul;
 
 
   }
   ///O(sqrt(n)
 
 
  /* for(int i=0 ; i<p.size() ; i++)
     cout<<p[i].first<<" " << p[i].second<<"\n";*/
 
     /// problem Almost prime
     int n,temp,res=0;
     cin>>n;
     for(int i=1 ; i<=n ; i++)
     {
 
         vector<pair<int,int>> p=factorize(i);
         if(p.size()==2)
            res++;
 
     }
     cout<<res;
 
 
 
 
 
 
    return 0;
}
 
/// O(nSqrt(n))
