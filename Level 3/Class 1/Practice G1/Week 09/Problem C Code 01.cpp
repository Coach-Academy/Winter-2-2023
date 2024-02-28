// C - Forming Quiz Teams
// n^2 * 2^n
#include <bits/stdc++.h>
using namespace std;

const int N = 16;
int n, tc = 1, xs[N], ys[N], visited[1 << N];
double dp[1 << 16];

double solve(int mask) {
    if (mask + 1 == (1 << n))
        return 0;
    double &ans = dp[mask];
    if (visited[mask] == tc)
        return ans;
    visited[mask] = tc;
    ans = 1e9;

    for (int i = 0; i < n; ++i) {
        if ((mask >> i) & 1)
            continue;
        for (int j = i + 1; j < n; ++j) {
            if ((mask >> j) & 1)
                continue;
            double dist = hypot(xs[i] - xs[j] * 1.0, ys[i] - ys[j] * 1.0);
            ans = min(ans, dist + solve(mask | (1 << i) | (1 << j)));
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cout << fixed << setprecision(2);
    for (; ; ++tc) {
        cin >> n;
        if (n == 0)
            break;
        n *= 2;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s >> xs[i] >> ys[i];
        }
        cout << "Case " << tc << ": " << solve(0) << '\n';
    }
    return 0;
}