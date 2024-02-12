#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
int arr[N];
int main() {

    int n ;
  cin >> n;
  long long sum = 0;
  for (int i=0; i < n;i++){
      cin >> arr[i];
      sum += arr[i];
  }
  long long x ;
  cin >> x;
  long long num = (x / sum) * n ;
  x%=sum;
  long long cur = 0;
  for (int i=0;i<n;i++){
      cur+=arr[i];
      num++;
      if (cur > x)
          break;
  }
  cout << num ;

    return 0;
}
