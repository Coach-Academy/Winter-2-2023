#include <bits/stdc++.h>

using namespace std;

vector <int> piFunction(string &s) {
    int n = (int)s.size();
    vector <int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while(j > 0 && s[i] != s[j]) j = pi[j-1];
        pi[i] = j+(s[i] == s[j]);
    }
    return pi;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s, pat;
    while(cin >> s >> pat) {
        int n = (int) s.size(), m = (int) pat.size();
        auto pi = piFunction(pat);
        vector<vector<int>> dp(n + 1, vector<int>(m, 2e9));
        dp[0][0] = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dp[i][j] == 2e9) continue;

                int nJ = j;
                while (nJ > 0 && s[i] != pat[nJ]) nJ = pi[nJ - 1];
                if (s[i] == pat[nJ]) nJ++;

                // leave the i-th character
                if (nJ < m) dp[i + 1][nJ] = min(dp[i + 1][nJ], dp[i][j]);
                if (nJ > j) {
                    // remove the i-th character
                    dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 1);
                }
            }
        }
        cout << *min_element(dp[n].begin(), dp[n].end()) << '\n';
    }
    return 0;
}
