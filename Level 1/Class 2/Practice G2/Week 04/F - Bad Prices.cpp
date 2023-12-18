#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 1 ; i <= t ; i++){
    int n,ans=0;
    cin >> n;
    int price[n];
    for (int i = 0 ; i < n ; i++)
      cin >> price[i];
    int mn = price[n-1];
    for (int i = n-2 ; i >= 0 ; i--){
      if (price[i] > mn)
         ans++;
      if (price[i] < mn)
         mn = price[i];  
    }  
    cout << ans << '\n';
  }
  return 0;
}
