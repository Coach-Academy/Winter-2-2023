#include <bits/stdc++.h>

using namespace std;

vector <int> dep;
vector <int> up[20];
vector <vector <int>> adj;
void dfs(int cur = 0) {
    for (auto &i : adj[cur]) {
        if (up[0][cur] == i) continue;
        up[0][i] = cur;
        dep[i] = dep[cur]+1;
        dfs(i);
    }
}

int kthAncestor(int u, int k) {
    for (int bt = 0; bt < 20; bt++) {
        if (k>>bt&1) {
            u = up[bt][u];
        }
    }
    return u;
}

int LCA(int u, int v) {
    if (dep[u] > dep[v]) swap(v, u);
    auto diff = dep[v]-dep[u];
    v = kthAncestor(v, diff);
    if (u == v) return u;
    for (int bt = 19; ~bt; bt--) {
        if (up[bt][u] != up[bt][v]) {
            u = up[bt][u];
            v = up[bt][v];
        }
    }
    return up[0][u];
}

void bldLCA() {
    dfs();
    for (int i = 1; i < 20; i++) {
        for (int j = 0; j < (int)adj.size(); j++) {
            up[i][j] = up[i-1][up[i-1][j]];
        }
    }
}

int main() {
    int n; cin >> n;
    adj.assign(n, {});
    for (auto &i : up) i.resize(n);
    dep.resize(n);
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bldLCA();
    int q; cin >> q;
    while(q--) {
        int u, v; cin >> u >> v; u--, v--;
        cout << LCA(u, v) << '\n';
    }
    return 0;
}
