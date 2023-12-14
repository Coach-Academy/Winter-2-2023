#include <bits/stdc++.h>

using namespace std;

pair<vector <int>, vector <int>> dijkstra(int src, vector <vector <pair<int, int>>> &adj) {
    int n = (int)adj.size();
    vector <int> dist(n, 2e9);
    dist[src] = 0;
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater<>> pq;
    pq.push({0, src});
    vector <int> par(n, -1);
    while(!pq.empty()) {
        auto [dis, node] = pq.top(); pq.pop();
        if (dist[node] < dis) continue;
        for (auto &[ch, w] : adj[node]) {
            if (dis+w < dist[ch]) {
                par[ch] = node;
                dist[ch] = dis+w;
                pq.push({dist[ch], ch});
            }
        }
    }
    return {dist, par};
}

vector <int> bldPath(int src, int dist, vector <int> &par) {
    vector <int> path{dist};
    int cur = dist;
    while(cur != src) {
        path.push_back(par[cur]);
        cur = par[cur];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    int n, m; cin >> n >> m;
    vector <vector <pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v, w; cin >> u >> v >> w; u--, v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    return 0;
}
