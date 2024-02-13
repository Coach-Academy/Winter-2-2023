#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e5+10;
int n, dp[2][N], x[N], h[N];
int go(int prev = 0, int cur = 0) {
    if (cur == n) return 0;
    auto &ret = dp[prev][cur];
    if (~ret) return ret;
    ret = go(0, cur+1); // leave me stand

    int r = (cur ? x[cur-1]+(prev ? h[cur-1] : 0) : -(int)2e9-100);
    int l = x[cur]-h[cur];
    if (l > r) ret = max(ret, go(0, cur+1)+1); // make me fall left

    l = (cur+1 < n ? x[cur+1] : (int)2e9+100);
    r = x[cur]+h[cur];
    if (l > r) ret = max(ret, go(1, cur+1)+1); // make me fall right

    return ret;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i] >> h[i];
    memset(dp, -1, sizeof dp);
    cout << go() << '\n';
    return 0;
}
