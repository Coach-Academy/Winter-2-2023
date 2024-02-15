#include <bits/stdc++.h>

using namespace std;

int main() {
    int coins[] = {1, 5, 10, 25, 50};
    int n; cin >> n;
    vector <int> dp(n+1);
    dp[0] = 1;
    for (auto &c : coins) {
        for (int i = c; i <= n; i++) {
            dp[i]+=dp[i-c];
        }
    }
    cout << dp[n] << '\n';
    return 0;
}
