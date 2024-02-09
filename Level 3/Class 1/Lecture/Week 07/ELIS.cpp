#include <bits/stdc++.h>

using namespace std;

int n;
int a[11], dp[11][21];
int go(int cur = 0, int lst = 0) {
    if (cur == n) return 0;
    auto &ret = dp[cur][lst];
    if (~ret) return ret;
    ret = go(cur+1, lst);
    if (a[cur] > lst) ret = max(ret, 1+go(cur+1, a[cur]));
    return ret;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    memset(dp, -1, sizeof dp);
    cout << go();
    return 0;
}
