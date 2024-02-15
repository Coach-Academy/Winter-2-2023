#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    a.push_back(-2e9);
    vector <vector <int>> dp(n+1, vector <int> (n+1, -2e9));
    for (int i = 0; i < n; i++) dp[n][i] = 0;
    for (int i = n-1; ~i; i--) {
        for (int lst = n; ~lst; lst--) {
            dp[i][lst] = max(dp[i+1][lst], (a[i] > a[lst] ? dp[i+1][i]+1 : -(int)2e9));
        }
    }
    int ans = 0;
    for (int i = 0; i <= n; i++) ans = max(ans, dp[0][i]);
    cout << ans << '\n';
    return 0;
}
