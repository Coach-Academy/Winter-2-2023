#include <bits/stdc++.h>

using namespace std;

const int N = 20, mod = 1e9+7;
int dp[N][1<<N], t[N], g[N];

int main() {
    int n, T; cin >> n >> T;
    for (int i = 1; i <= n; i++) cin >> t[i] >> g[i];
    dp[0][0] = 1;
    for (int msk = 0; msk < (1<<n); msk++) {
        for (int i = 0; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (g[j] != g[i] && msk >> (j - 1) & 1 ^ 1) {
                    dp[j][msk | (1 << (j - 1))] += dp[i][msk];
                    if (dp[j][msk | (1 << (j - 1))] >= mod) dp[j][msk | (1 << (j - 1))] -= mod;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int msk = 0; msk < (1<<n); msk++) {
            int sm = 0;
            for (int j = 1; j <= n; j++) {
                if (msk>>(j-1)&1) sm+=t[j];
            }
            if (sm == T) ans+=dp[i][msk];
            if (ans >= mod) ans-=mod;
        }
    }
    cout << ans << '\n';
    return 0;
}
