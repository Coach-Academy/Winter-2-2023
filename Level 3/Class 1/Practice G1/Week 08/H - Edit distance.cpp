#include <bits/stdc++.h>

using namespace std;
#define ll long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string a, b;
    cin >> a >> b;
    const int n = a.size();
    const int m = b.size();
    int dp[n + 1][m + 1];
    memset(dp, '?', sizeof dp);
    for (int j = 0; j <= m; ++j) {
      dp[n][j] = m - j;
    }
    for (int j = 0; j <= n; ++j) {
      dp[j][m] = n - j;
    }
    for (int i = n - 1; i >= 0; --i) {
      for (int j = m - 1; j >= 0; --j) {
        int &res = dp[i][j];
        res = dp[i + 1][j + 1] + (a[i] != b[j]);
        res = min(res, 1 + dp[i + 1][j]);
        res = min(res, 1 + dp[i][j + 1]);
      }
    }
    cout << dp[0][0] << '\n';
  }
}
