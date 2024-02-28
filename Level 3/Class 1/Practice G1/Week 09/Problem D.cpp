// D - Traveling by Stagecoach
#include <bits/stdc++.h>
using namespace std;

const int N = 8, M = 30;

int n, b, tc = 1, tickets[N], visited[M][1 << N];
vector<pair<int, int>> g[M];

double dp[M][1 << N];

double solve(int u, int mask) {
    if (u == b)
        return 0;
    double &ans = dp[u][mask];
    if (visited[u][mask] == tc)
        return ans;
    visited[u][mask] = tc;
    ans = 1e9;
    for (int i = 0; i < n; ++i) {
        if ((mask >> i) & 1)
            continue;
        for (auto [v, w] : g[u])
            ans = min(ans, w / (double) tickets[i] + solve(v, mask | (1 << i)));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cout << fixed << setprecision(3);
    for (; ; ++tc) {
        int m, p, a;
        cin >> n >> m >> p >> a >> b;
        if (n == 0 and m == 0 and p == 0 and a == 0 and b == 0)
            break;
        --a, --b;
        for (int i = 0; i < n; ++i)
            cin >> tickets[i];
        for (int u, v, w, i = 0; i < p; ++i) {
            cin >> u >> v >> w;
            --u, --v;
            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
        }

        double ans = solve(a, 0);
        if (ans < 1e9) {
            cout << ans << '\n';
        } else {
            cout << "Impossible\n";
        }
        for (int i = 0; i < m; ++i)
            g[i].clear();
    }
    return 0;
}