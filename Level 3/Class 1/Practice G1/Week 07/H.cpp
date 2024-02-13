#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e5+10;
ll frq[N], dp[N];
ll go(int i = 1) {
    if (i >= N) return 0;
    auto &ret = dp[i];
    if (~ret) return ret;
    return ret = max(go(i+1), go(i+2)+frq[i]*i);
}

int main() {
    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        frq[x]++;
    }
    memset(dp, -1, sizeof dp);
    cout << go() << '\n';
    return 0;
}
