#include <bits/stdc++.h>
#define el '\n'
using namespace std;
void fast ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long sumOfDigits(long long x){
   int sum = 0;
   long long temp = x;
   while (x){
    sum += x % 10;
    x /= 10 ;
   }
   return sum;


}
int main()
{
    fast ();
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        while (__gcd(n , sumOfDigits(n))==1)
            n++;
        cout << n << el;
    }

}
