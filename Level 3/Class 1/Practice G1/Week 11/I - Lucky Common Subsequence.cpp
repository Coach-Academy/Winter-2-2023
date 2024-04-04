#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int nxt[N][128];
int dp[N][N][N];

void kmp(string &pat) {
  int n = pat.size();
  vector<int> phi(n);
  for (int i = 1, k = 0; i < n; ++i) {
    while (k > 0 and pat[i] != pat[k]) {
      k = phi[k - 1];
    }
    if (pat[k] == pat[i])++k;
    phi[i] = k;
  }
  for (int k = 0; k < n; ++k) {
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
      int &newK = nxt[k][ch];
      newK = k;
      if (k > 0 && pat[k] != ch)
        newK = nxt[phi[k - 1]][ch];
      if (ch == pat[k])
        newK++;
    }
  }
}

string a, b, pat;

int solve(int i, int j, int k) {
  if (k == pat.size()) return -1e9;
  if (i == a.size() or j == b.size())return 0;
  int &res = dp[i][j][k];
  if (~res)return res;
  res = max(
      solve(i + 1, j, k),
      solve(i, j + 1, k)
  );
  if (a[i] == b[j]) {
    res = max(
        res,
        solve(i + 1, j + 1, nxt[k][a[i]]) + 1
    );
  }
  return res;
}

void build(int i, int j, int k) {
  if (i == a.size() or j == b.size())return;
  int res = solve(i, j, k);
  if (solve(i + 1, j, k) == res) {
    build(i + 1, j, k);
  } else if (solve(i, j + 1, k) == res) {
    build(i, j + 1, k);
  } else {
    cout << a[i];
    build(i + 1, j + 1, nxt[k][a[i]]);
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> a >> b >> pat;
  kmp(pat);
  memset(dp, -1, sizeof dp);
  if (solve(0, 0, 0) > 0)build(0, 0, 0);
  else cout << 0;
}
