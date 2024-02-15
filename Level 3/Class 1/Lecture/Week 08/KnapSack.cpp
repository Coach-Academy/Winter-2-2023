#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector <int> v(n+1), w(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    vector <int> dp(k+1, -2e9);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        // dp[i][j] = dp[i-1][j-w[i]]
        for (int j = k; j; j--) {
            if (j >= w[i]) dp[j] = max(dp[j], dp[j-w[i]]+v[i]);
        }
        for (int j = 1; j <= k; j++) dp[j] = max(dp[j], dp[j-1]);
    }
    cout << dp[k] << '\n';
    return 0;
}
