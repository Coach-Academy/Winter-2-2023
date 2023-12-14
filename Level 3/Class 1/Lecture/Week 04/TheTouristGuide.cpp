#include <bits/stdc++.h>

using namespace std;

using ll = long long;

pair<vector <ll>, vector <int>> dijkstra(int src, vector <vector <pair<int, int>>> &adj) {
    int n = (int)adj.size();
    vector <ll> dist(n, -2e18);
    dist[src] = 2e18;
    priority_queue <pair<ll, int>> pq;
    pq.push({2e18, src});
    vector <int> par(n, -1);
    while(!pq.empty()) {
        auto [dis, node] = pq.top(); pq.pop();
        if (dist[node] > dis) continue;
        for (auto &[ch, w] : adj[node]) {
            if (min(dis, (ll)w) > dist[ch]) {
                par[ch] = node;
                dist[ch] = min(dis, (ll)w);
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
    int n, m;
    int tc = 1;
    while(cin >> n >> m, n) {
        cout << "Scenario #" << tc++ << '\n';
        cout << "Minimum Number of Trips = ";
        vector <vector<pair<int, int>>> adj(n);
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            u--, v--;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        int a, b, tot; cin >> a >> b >> tot; a--, b--;
        auto dist = dijkstra(a, adj).first;
        ll x = dist[b]-1;
        cout << (a == b ? 0 : (tot+x-1)/x) << "\n\n";
    }
    return 0;
}
