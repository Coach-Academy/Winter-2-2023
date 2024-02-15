#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int n = (int)s.size(), m = (int)t.size();
    vector <int> dp(m+1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j; j--) {
            if (s[i-1] == t[j-1]) dp[j] = max(dp[j], 1+dp[j-1]);
            dp[j] = max(dp[j], dp[j-1]);
        }
    }
    cout << dp[m] << '\n';
    return 0;
}
