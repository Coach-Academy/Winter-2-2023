#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main() {

   long long n ;
   cin >> n;
   if (n % 2 == 0)
       cout << n / 2;
   else cout << - (n+1) / 2;
    return 0;
}