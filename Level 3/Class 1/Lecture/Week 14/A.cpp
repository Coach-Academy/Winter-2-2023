#include <bits/stdc++.h>

using namespace std;

vector <int> dep;
vector <int> up[20];
vector <vector <int>> adj;
void dfs(int cur) {
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

void bldLCA(int root = 0) {
    dfs(root);
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
    set <int> roots;
    for (int i = 0; i < n; i++) roots.insert(i);
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        while(m--) {
            int u; cin >> u;
            adj[i].push_back(u);
            if (roots.count(u)) roots.erase(u);
        }
    }
    assert(roots.size() == 1);
    bldLCA(*roots.begin());
    int q; cin >> q;
    while(q--) {
        int u, v; cin >> u >> v;
        cout << LCA(u, v) << '\n';
    }
    return 0;
}
