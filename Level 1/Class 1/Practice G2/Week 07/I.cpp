#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main() {

  int t;
  cin >> t;
  while (t--){
      int n , d;
      cin >> n >> d;
      int arr[n+1];
      for (int i=0;i<n;i++)
          cin >> arr[i];
      sort (arr , arr+n);
      if (arr[n-1] <= d || arr[0]+arr[1] <= d)
          cout << "YES\n";
      else cout << "NO\n";
  }
    return 0;
}
