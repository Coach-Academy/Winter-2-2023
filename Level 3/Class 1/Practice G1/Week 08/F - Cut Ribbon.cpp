#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int inf = 5e3;
int arr[3];
int n;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  for (int &x: arr) {
    cin >> x;
  }
  int dp[n + 1];
  dp[0] = 0;
  for (int i = 1; i <= n; ++i) {
    dp[i] = -inf;
    for (int &x: arr) {
      if (i - x >= 0) {
        dp[i] = max(dp[i], 1 + dp[i - x]);
      }
    }
  }
  cout << dp[n];
}
