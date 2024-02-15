#include <bits/stdc++.h>

using namespace std;

int main() {
    int _t; cin >> _t;
    while(_t--) {
        string s, t; cin >> s >> t;
        int n = (int) s.size(), m = (int) t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 2e9));
        dp[0][0] = 0;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i > 0 && j > 0) {
                    dp[i][j] = min(dp[i][j], (s[i - 1] != t[j - 1])+dp[i - 1][j - 1]);
                }
                if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
                if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
            }
        }
        cout << dp[n][m] << '\n';
    }
    return 0;
}
