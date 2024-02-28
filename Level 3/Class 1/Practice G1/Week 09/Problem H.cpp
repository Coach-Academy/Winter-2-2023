// H - Shopping Trip
#include <bits/stdc++.h>
using namespace std;
const int P = 12, N = 52;

int n, p, tc = 1, store[P], saved[P], dist[N][N], dp[N][1 << P], visited[N][1 << P];

void floyd() {
    for (int k = 0; k <= n; ++k)
        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= n; ++j)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

int convert(string &s) {
    int value = 0;
    for (char c : s) {
        if (c == '.')
            continue;
        value = value * 10 + c - '0';
    }
    return value;
}

int solve(int u, int mask) {
    if (mask + 1 == (1 << p))
        return -dist[u][0];
    int &ans = dp[u][mask];
    if (visited[u][mask] == tc)
        return ans;
    visited[u][mask] = tc;
    ans = -1e9;
    for (int i = 0; i < p; ++i) {
        if ((mask >> i) & 1)
            continue;
        ans = max(ans, solve(u, mask | (1 << i)));
        ans = max(ans, saved[i] - dist[u][store[i]] + solve(store[i], mask | (1 << i)));
    }
    return ans;
}

signed main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cout << fixed << setprecision(2);
    int TC; cin >> TC;
    for (; tc <= TC; ++tc) {
        int m; cin >> n >> m;
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j)
                dist[i][j] = 1e9;
            dist[i][i] = 0;
        }
        for (int u, v; m--; ) {
            string weight;
            cin >> u >> v >> weight;
            int cur = convert(weight);
            dist[u][v] = dist[v][u] = min(dist[u][v], cur);
        }
        floyd();
        cin >> p;
        for (int i = 0; i < p; ++i) {
            string s;
            cin >> store[i] >> s;
            saved[i] = convert(s);
        }
        int ans = solve(0, 0);
        if (ans < 1) {
            cout << "Don't leave the house\n";
        } else {
            cout << "Daniel can save $" << ans / 100.0 << '\n';
        }
    }
    return 0;
}