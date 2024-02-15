#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        vector <int> pref(n);
        for (int i = 0; i < n; i++) {
            cin >> pref[i];
            if (i) pref[i]+=pref[i-1];
        }
        vector <vector <int>> dp(n, vector <int> (n, 2e9));
        for (int i = 0; i < n; i++) dp[i][i] = 0;
        for (int l = n-1; ~l; l--) {
            for (int r = l; r < n; r++) {
                for (int sp = l; sp < r; sp++) {
                    int L = pref[sp]-(l ? pref[l-1] : 0);
                    int R = pref[r]-pref[sp];
                    L%=100, R%=100;
                    dp[l][r] = min(dp[l][r], dp[l][sp]+dp[sp+1][r]+L*R);
                }
            }
        }
        cout << dp[0][n-1] << '\n';
    }
    return 0;
}
