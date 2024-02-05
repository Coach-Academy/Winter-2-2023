#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, total = 0, ans = 0;
   cin >> n;
   while(n--)
   {
       int a, b;
       cin >> a >> b;
       total = (total + b) - a;
       ans = max(ans, total);
   }
   cout << ans;
}
