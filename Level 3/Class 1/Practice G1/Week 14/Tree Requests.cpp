#include <bits/stdc++.h>

using namespace std;
const int N = 5e5 + 5;
vector<int> adj[N];
string s;
int timer;
int in[N], out[N];
vector<int> nodes[N];
vector<int> pref[N];

void dfs(int u, int lvl = 1) {
  nodes[lvl].emplace_back(timer);
  int p = 1 << (s[u] - 'a');
  pref[lvl].emplace_back(p);

  in[u] = timer++;
  for (int &v: adj[u]) {
    dfs(v, lvl + 1);
  }
  out[u] = timer - 1;
}


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  for (int i = 2, p; i <= n; ++i) {
    cin >> p;
    adj[p].emplace_back(i);
  }
  cin >> s;
  s = "$" + s;
  dfs(1);
  for (auto &a: pref) {
    for (int i = 1; i < a.size(); ++i) {
      a[i] ^= a[i - 1];
    }
  }
  int u, h;
  while (q--) {
    cin >> u >> h;
    auto it = upper_bound(nodes[h].begin(), nodes[h].end(), out[u]);
    int r = it - nodes[h].begin() - 1;
    if (r < 0 or nodes[h][r] < in[u]) {
      cout << "Yes\n";
      continue;
    }
    int l = lower_bound(nodes[h].begin(), nodes[h].end(), in[u]) - nodes[h].begin();

    int res = pref[h][r];
    if (l > 0)res ^= pref[h][l - 1];
    cout << (__builtin_popcount(res) < 2 ? "Yes\n" : "No\n");
  }


}
