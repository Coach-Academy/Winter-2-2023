#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 105, mod = 1e9+7;
int n, k, d, dp[N][2];
int go(int sm = 0, int taken = 0) {
    if (sm == n) return taken;
    auto &ret = dp[sm][taken];
    if (~ret) return ret;
    ret = 0;
    for (int i = 1; i <= k; i++) {
        if (sm+i <= n) {
            ret+=go(sm+i, taken|(i >= d));
            if (ret >= mod) ret-=mod;
        }
    }
    return ret;
}

int main() {
    cin >> n >> k >> d;
    memset(dp, -1, sizeof dp);
    cout << go() << '\n';
    return 0;
}
