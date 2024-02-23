#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
  freopen("out.txt", "w", stdout);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    const int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int sz = 2; sz <= n; ++sz) {
      for (int l = 0; l + sz <= n; ++l) {
        int r = l + sz - 1;
        int &res = dp[l][r];
        if (s[l] == s[r]) {
          res = dp[l + 1][r - 1];
        } else {
          res = 1 + min(dp[l + 1][r], dp[l][r - 1]);
        }
      }
    }
    cout << dp[0][n - 1] << '\n';
  }

}
