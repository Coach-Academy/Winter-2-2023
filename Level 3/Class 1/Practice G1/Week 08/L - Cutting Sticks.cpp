#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
  int l;
  while (cin >> l, l) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x: v) {
      cin >> x;
    }
    ++n, v.emplace_back(l);
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int sz = 2; sz <= n; ++sz) {
      for (int i = 0; i + sz <= n; ++i) {
        int j = i + sz - 1;
        int &res = dp[i][j];
        res = INT_MAX;
        int cost = v[j] - (i ? v[i - 1] : 0);
        for (int k = i; k < j; k++) {
          res = min(
              res,
              dp[i][k] + dp[k + 1][j] + cost
          );
        }
      }
    }
    cout << "The minimum cutting is " << dp[0][n - 1] << ".\n";
  }

}
