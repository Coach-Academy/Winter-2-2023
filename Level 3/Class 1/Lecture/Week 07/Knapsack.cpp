#include <bits/stdc++.h>

using namespace std;

int n, k;
int dp[101][1001];
vector <pair<int, int>> items;
int go(int cur = 0, int rem = k) {
    if (cur == n) return 0;

    auto &ret = dp[cur][rem];
    if (~ret) return ret; // ~ret === ret != -1
    ret = 0;
    // take it
    if (rem >= items[cur].first) {
        ret = max(ret, go(cur + 1, rem - items[cur].first) + items[cur].second);
    }
    // leave it
    ret = max(ret, go(cur+1, rem));

    return ret;
}

int main() {
//    for (auto &i : dp) i = -1;
    cin >> n >> k;
    items.resize(n);
    for (auto &[w, v] : items) cin >> w >> v;
    memset(dp, -1, sizeof dp);
    cout << go() << '\n';
    return 0;
}
