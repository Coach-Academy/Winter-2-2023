#include <bits/stdc++.h>

using namespace std;
const int L = 16;
int n;
vector<vector<pair<int, int>>> adj;
vector<vector<int>> par, dp;
vector<int> lvl;

void pre() {
  adj.assign(n, {});
  par.assign(L, vector<int>(n));
  dp.assign(L, vector<int>(n));
  lvl.assign(n, {});
}

struct DSU {
  vector<int> par;

  DSU(int n) : par(n) { iota(par.begin(), par.end(), 0); }

  int find(int u) {
    if (u == par[u])return u;
    return par[u] = find(par[u]);
  }

  bool mrg(int u, int v) {
    if ((u = find(u)) == (v = find(v))) {
      return false;
    }
    par[u] = v;
    return true;
  }
};

int mrg(int x, int y) { return min(x, y); }

void dfs(int u, int p) {

  for (int msk = 1; msk < L; ++msk) {
    par[msk][u] = par[msk - 1][par[msk - 1][u]];
    dp[msk][u] = mrg(
        dp[msk - 1][u],
        dp[msk - 1][par[msk - 1][u]]
    );
  }

  for (auto &[v, w]: adj[u]) {
    if (v == p)continue;
    par[0][v] = u;
    dp[0][v] = w;
    lvl[v] = lvl[u] + 1;
    dfs(v, u);
  }
}

int query(int u, int v) {
  if (lvl[u] < lvl[v])
    swap(u, v);
  int diff = lvl[u] - lvl[v];
  int ans = 1e9;
  for (int msk = 0; diff; ++msk, diff >>= 1) {
    if (diff & 1) {
      ans = mrg(ans, dp[msk][u]);
      u = par[msk][u];
    }
  }
  if (u == v)return ans;

  for (int msk = L - 1; msk >= 0; --msk) {
    if (par[msk][u] != par[msk][v]) {
      ans = mrg(ans, mrg(dp[msk][u], dp[msk][v]));
      u = par[msk][u], v = par[msk][v];
    }
  }
  ans = mrg(ans, mrg(dp[0][u], dp[0][v]));
  return ans;
}

void solve() {
  pre();
  int m, q;
  cin >> m >> q;
  vector<array<int, 3>> edges(m);
  for (auto &[w, u, v]: edges) {
    cin >> u >> v >> w, --u, --v;
  }
  sort(edges.rbegin(), edges.rend());
  DSU dsu(n);
  for (auto &[w, u, v]: edges) {
    if (dsu.mrg(u, v)) {
      adj[u].emplace_back(v, w);
      adj[v].emplace_back(u, w);
    }
  }
  dfs(0, 0);
  int u, v;
  while (q--) {
    cin >> u >> v;
    cout << query(--u, --v) << '\n';
  }

}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  while (cin >> n) {

    solve();
  }
}
