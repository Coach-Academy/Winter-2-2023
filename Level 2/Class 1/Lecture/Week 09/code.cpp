#include <bits/stdc++.h>

using namespace std;

int main()
{


   /*int x=5;
   101
   cout<<(5^2);*/
   ///+ - * % --> math
   ///&& || ! --> logical
//   a!=5
   /// & and | or ^ Xor ~ not << left shift >> right shift
   /*cout<<x>5 && (a^b);
   ((c|b)&a)
   b|a&c*/
   //a&b -->
   ///And (best case) return smallest number
   //(a|b) -->
   ///Or worst case return biggest number


   /// A^0=A  A^(1)'s=A`
  /* int a[11],res=0;
   for(int i=0 ; i<11 ; i++)
   {
        cin>>a[i];
        res^=(a[i]);
   }
   cout<<res;*/

   int a=123;
   //cout<<(~a);

  // 00000000 00000000 000000    00 00000001
   //11111111 11111111 11111111 11110101
//   cout<<INT_MAX;



  /// cout<<(__builtin_popcount(7));

   // 1968

  // cout<<(int(log2(16))+1);
 /* int n;
  cin>>n;
 int cnt=0;
   for(int i=0 ; i<log2(n);i++)
   {
     cnt+=((n>>i)&1);
   }
   cout<<cnt;*/

  /* 0 0 0
          3 2 1
   {}     0 0 0   0
   {3}    0 0 1   1
   {2}    0 1 0   2
   {2,3}  0 1 1   3
   {1}    1 0 0   4
   {1,3}  1 0 1   5
   {1,2}  1 1 0   6
   {1,2,3}1 1 1   7  2^n-1*/

   /*(1<<n) = pow(2,n)
   (2^n*n)*/

   /// problem Raising Bacteria

   /*int x;
   cin>>x;
   cout<<__builtin_popcount(x);*/


   int n,l,r,x;
   cin>>n>>l>>r>>x;
   int nums[16];
   for(int i=0 ; i<n ; i++)
    cin>>nums[i];

    int counter=0;
for (int mask = 0; mask < (1 << n); mask++) {

    int sum = 0;
    int mx=0;
    int mn=INT_MAX;
    int c=0;

    for (int i = 0; i < n; i++) {

        if ((mask >> i) & 1)
        {

            sum += nums[i];
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
            c++;
        }
    }

    if (sum >=l && sum<=r && mx-mn>=x && c>=2)
        counter++;

}
cout<<counter;







  // 5
  // 0101




    return 0;
}
