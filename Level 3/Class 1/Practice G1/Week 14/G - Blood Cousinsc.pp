#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5, L = 18;
vector<int> adj[N];
int timer;
int in[N], out[N];
vector<int> nodes[N];
int par[L][N];
int lvl[N];

void dfs(int u) {
  nodes[lvl[u]].emplace_back(timer);

  for (int msk = 1; msk < L; ++msk) {
    par[msk][u] = par[msk - 1][par[msk - 1][u]];
  }

  in[u] = timer++;
  for (int &v: adj[u]) {
    lvl[v] = lvl[u] + 1;
    par[0][v] = u;
    dfs(v);
  }
  out[u] = timer - 1;
}

int kThAnc(int u, int k) {
  if (lvl[u] <= k) return 0;
  for (int i = 0; k; ++i, k >>= 1) {
    if (k & 1) {
      u = par[i][u];
    }
  }
  return u;
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n;
  vector<int> roots;
  for (int i = 1, p; i <= n; ++i) {
    cin >> p;
    if (!p) {
      roots.emplace_back(i);
    } else {
      adj[p].emplace_back(i);
    }
  }
  for (int &root: roots) {
    lvl[root] = 1;
    dfs(root);
  }
  cin >> q;
  int u, k;
  while (q--) {
    cin >> u >> k;
    int h = lvl[u];
    u = kThAnc(u, k);
    if (!u) {
      cout << "0 ";
      continue;
    }
    auto it = upper_bound(nodes[h].begin(), nodes[h].end(), out[u]);
    int r = it - nodes[h].begin() - 1;
    if (r < 0 or nodes[h][r] < in[u]) {
      cout << "0 ";
      continue;
    }
    int l = lower_bound(nodes[h].begin(), nodes[h].end(), in[u]) - nodes[h].begin();
    cout << r - l << ' ';
  }


}
