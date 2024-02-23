#include <bits/stdc++.h>

using namespace std;
#define ll long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string a, b;
  while (getline(cin, a)) {
    getline(cin, b);
    const int n = a.size();
    const int m = b.size();
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof dp);
    for (int i = n - 1; i >= 0; --i) {
      for (int j = m - 1; j >= 0; --j) {
        int &res = dp[i][j];
        if (a[i] == b[j]) {
          res = 1 + dp[i + 1][j + 1];
        } else {
          res = max(res, dp[i + 1][j]);
          res = max(res, dp[i][j + 1]);
        }
      }
    }
    cout << dp[0][0] << '\n';
  }
}
