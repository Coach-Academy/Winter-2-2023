#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,ans=0;
  cin >> n;
  int d[n-1];
  for (int i = 0 ; i < n-1 ; i++)
    cin >> d[i];
  int a,b;
  cin >> a >> b;
  for (int i = a-1 ; i < b-1 ; i++){
    ans += d[i];
  }  
  cout << ans << '\n';
  return 0;
}
