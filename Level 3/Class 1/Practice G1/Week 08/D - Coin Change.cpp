#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int arr[] = {1, 5, 10, 25, 50};
const int N = 7495;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int dp[6][N];
  memset(dp, 0, sizeof dp);
  for (int i = 4; i >= 0; --i) {
    for (int rem = 0; rem < N; ++rem) {
      int &res = dp[i][rem];
      if (rem == 0) {
        res = 1;
        continue;
      }
      res = dp[i + 1][rem];
      if (rem >= arr[i]) {
        res += dp[i][rem - arr[i]];
      }
    }
  }
  int n;
  while (cin >> n) {
    cout << dp[0][n] << '\n';
  }
}
