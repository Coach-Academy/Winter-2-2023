#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5, L = 18;
vector<vector<pair<int, int>>> adj;
vector<vector<int>> par, dp;
vector<int> lvl;
int n;

void pre() {
  adj.assign(n + 1, {});
  par.assign(L, vector<int>(n + 1));
  dp.assign(L, vector<int>(n + 1));
  lvl.assign(n + 1, {});
}

void dfs(int u, int p) {
  for (int msk = 1; msk < L; ++msk) {
    dp[msk][u] = max(
        dp[msk - 1][u],
        dp[msk - 1][par[msk - 1][u]]
    );
    par[msk][u] = par[msk - 1][par[msk - 1][u]];
  }
  for (auto &[v, w]: adj[u]) {
    if (v == p)continue;
    dp[0][v] = w;
    par[0][v] = u;
    lvl[v] = lvl[u] + 1;
    dfs(v, u);
  }
}

int query(int u, int v) {
  if (lvl[u] < lvl[v])swap(u, v);

  int d = lvl[u] - lvl[v];
  int ans = 0;
  for (int msk = 0; d; ++msk, d >>= 1) {
    if (d & 1) {
      ans = max(ans, dp[msk][u]);
      u = par[msk][u];
    }
  }
  if (u == v)return ans;
  for (int msk = L - 1; ~msk; --msk) {
    if (par[msk][u] != par[msk][v]) {
      ans = max({
                    ans,
                    dp[msk][u],
                    dp[msk][v]
                });
      u = par[msk][u], v = par[msk][v];
    }
  }
  return max({
                 ans,
                 dp[0][u],
                 dp[0][v]
             });
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  while (cin >> n, n) {
    pre();
    for (int i = 1, u, v, w; i < n; ++i) {
      cin >> u >> v >> w;
      adj[--u].emplace_back(--v, w);
      adj[v].emplace_back(u, w);
    }
    dfs(0, 0);
    int q, u, v;
    cin >> q;
    while (q--) {
      cin >> u >> v;
      cout << query(--u, --v) << '\n';
    }
  }
}
