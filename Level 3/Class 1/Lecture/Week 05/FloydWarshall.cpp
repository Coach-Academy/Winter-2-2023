#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector <vector <int>> adj(n, vector <int> (n, 2e9));
    for (int i = 0; i < n; i++) adj[i][i] = 0;
    while(m--) {
        int u, v, w; cin >> u >> v >> w; u--, v--;
        adj[u][v] = min(adj[u][v], w);
        adj[v][u] = min(adj[v][u], w);
    }
    for (int mi = 0; mi < n; mi++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                adj[i][j] = min(adj[i][j], adj[i][mi]+adj[mi][j]);
            }
        }
    }
    return 0;
}

