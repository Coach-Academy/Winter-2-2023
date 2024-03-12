#include <bits/stdc++.h>

using namespace std;

int fact(int x)
{
    if(x<=1)
        return 1;

       return fact(x-1)*x;
}
/// O(n)
///for(int i=0 ; i<n)
    /// O(n)



int fib(int x)
{
    if(x<=1)
        return x;

    return fib(x-1)+fib(x-2);
}
///O(2^n)



int power(int x,int n)
{
    if(x==0)
      return 0;
    if(n==0)
        return 1;

    return x*power(x,n-1);

}
/// O(n)






int main()
{

   cout<<power(2,10)<<"\n";
     
  /// cout<<fun2(10);










    return 0;
}
