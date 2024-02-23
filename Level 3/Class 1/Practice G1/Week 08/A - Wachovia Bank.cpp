#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  int n, mx;
  cin >> mx >> n;
  vector<int> w(n), val(n);
  for (int i = 0; i < n; ++i) {
    cin >> w[i] >> val[i];
  }
  int dp[n + 1][mx + 1];
  memset(dp, 0, sizeof dp);
  for (int i = n - 1; i >= 0; --i) {
    for (int rem = 0; rem <= mx; ++rem) {
      int &res = dp[i][rem];
      /// option 1 : pick
      if (w[i] <= rem) {
        res = val[i] + dp[i + 1][rem - w[i]];
      }
      /// option 2: leave
      res = max(res, dp[i + 1][rem]);
    }
  }
  cout << "Hey stupid robber, you can get " << dp[0][mx] << ".\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
