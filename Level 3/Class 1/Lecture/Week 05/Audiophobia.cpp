#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc = 1, n, m, q;
    while(cin >> n >> m >> q, n) {
        if (tc > 1) cout << '\n';
        cout << "Case #" << tc++ << '\n';
        vector<vector<int>> adj(n, vector<int>(n, 2e9));
        for (int i = 0; i < n; i++) adj[i][i] = 0;
        while (m--) {
            int u, v, w;
            cin >> u >> v >> w; u--, v--;
            adj[u][v] = min(adj[u][v], w);
            adj[v][u] = min(adj[v][u], w);
        }
        for (int mi = 0; mi < n; mi++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    adj[i][j] = min(adj[i][j], max(adj[i][mi], adj[mi][j]));
                }
            }
        }
        while(q--) {
            int u, v; cin >> u >> v; u--, v--;
            if (adj[u][v] > 2e8) cout << "no path\n";
            else cout << adj[u][v] << '\n';
        }
    }
    return 0;
}

