#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 1 ; i <= t ; i++){
    int n,k,sum=0;
    cin >> n >> k;
    int a[n],b[n];
    for (int i = 0  ;i < n ; i++)
      cin >> a[i];
    for (int i = 0  ;i < n ; i++)
      cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());    
    for (int i = 0  ; i < n ; i++){
      if (k > 0 && a[i] < b[i]){
        swap(a[i],b[i]);
        k--;
      }
      sum += a[i];
    }
    cout << sum << '\n';
  }
  return 0;
}
