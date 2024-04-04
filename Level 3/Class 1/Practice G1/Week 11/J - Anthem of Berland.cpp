#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
int nxt[N][128];

vector<int> kmp(string &pat) {
  int n = pat.size();
  vector<int> ph(n);
  for (int i = 1, k = 0; i < n; ++i) {
    while (k > 0 and pat[i] != pat[k]) {
      k = ph[k - 1];
    }
    if (pat[k] == pat[i])++k;
    ph[i] = k;
  }
  return ph;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, pat;
  cin >> s >> pat;
  int n = s.size(), m = pat.size();
  auto phi = kmp(pat);
  for (int k = 0; k < m; ++k) {
    for (char ch = 'a'; ch <= 'z'; ++ch) {
      int &newK = nxt[k][ch];
      newK = k;
      if (k > 0 && pat[k] != ch)
        newK = nxt[phi[k - 1]][ch];
      if (ch == pat[k])
        newK++;
    }
  }
  for (char ch = 'a'; ch <= 'z'; ++ch) {
    nxt[m][ch] = nxt[phi[m - 1]][ch];
  }
  vector<vector<int>> dp(n + 1, vector<int>(m + 1));
  dp[n][m] = 1;
  for (int i = n - 1; i >= 0; --i) {
    for (int k = 0; k <= m; ++k) {
      int &res = dp[i][k];
      if (s[i] == '?') {
        for (int ch = 'a'; ch <= 'z'; ++ch) {
          res = max(
              res,
              dp[i + 1][nxt[k][ch]] + (k == m)
          );
        }
      } else {
        res = dp[i + 1][nxt[k][s[i]]] + (k == m);
      }
    }
  }
  cout << dp[0][0];
}
