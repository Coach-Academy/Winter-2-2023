#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int inf = 5e3, mod = 1e9 + 7;
/// 0 -> A
/// 1 -> B
/// 2 -> C
/// 3 -> D

int add(int a, int b) {
  a += b;
  if (a >= mod)a -= mod;
  return a;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int dp[4][2];
  memset(dp, 0, sizeof dp);
  dp[3][0] = 1;
  for (int rem = 1; rem <= n; ++rem) {
    for (int i = 0; i < 4; ++i) {
      int &res = dp[i][rem & 1];
      res = 0;
      for (int j = 0; j < 4; ++j) {
        if (i == j)continue;
        res = add(res, dp[j][(rem - 1) & 1]);
      }
    }
  }
  cout << dp[3][n & 1];
}
