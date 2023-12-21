#include <bits/stdc++.h>

using namespace std;

pair<pair<vector <int>, vector <int>>, bool> Bellman(int src, vector <vector <pair<int, int>>> &adj) {
    int n = (int)adj.size();
    vector <int> dist(n, 2e9), par(n, -1);
    dist[src] = 0;
    int cnt = n;
    queue <int> q;
    q.push(src);
    vector <bool> inq(n, false);
    inq[src] = true;
    while(!q.empty()) {
        cnt--;
        int sz = (int)q.size();
        while(sz--) {
            auto cur = q.front();
            q.pop();
            inq[cur] = false;
            for (auto &[u, w]: adj[cur]) {
                if (dist[u] > dist[cur] + w) {
                    if (!cnt) return {{dist, par}, true};
                    dist[u] = dist[cur] + w;
                    par[u] = cur;
                    if (!inq[u]) q.push(u);
                    inq[u] = true;
                }
            }
        }
    }
    return {{dist, par}, false};
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
    int n; cin >> n;
    vector <vector <pair<int, int>>> adj(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            string x; cin >> x;
            if (x == "x") continue;
            adj[i].push_back({j, stoi(x)});
            adj[j].push_back({i, stoi(x)});
        }
    }
//    cout << Bellman(0, adj).second << '\n';
    auto dist = Bellman(0, adj).first.first;
//    for (auto &i : dist) cout << i << ' ';
    cout << *max_element(dist.begin(), dist.end()) << '\n';
    return 0;
}
