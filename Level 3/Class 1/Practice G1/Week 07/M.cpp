#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e5+10, mod = 1e9+7;
int k, dp[N];
int go(int i) {
    if (i < 0) return 0;
    if (i == 0) return 1;
    auto &ret = dp[i];
    if (~ret) return ret;
    ret = go(i-1)+go(i-k);
    if (ret >= mod) ret-=mod;
    return ret;
}

int main() {
    int t; cin >> t >> k;
    memset(dp, -1, sizeof dp);
    for (int i = 1; i < N; i++) go(i);
    for (int i = 1; i < N; i++) {
        dp[i]+=dp[i-1];
        if (dp[i] >= mod) dp[i]-=mod;
    }
    // dp[i] = number of ways to eat at most i flowers.
    while(t--) {
        int a, b; cin >> a >> b;
        int res = dp[b]-dp[a-1];
        if (res < 0) res+=mod;
        cout << res << '\n';
    }
    return 0;
}
