#include <bits/stdc++.h>

using namespace std;

const int N = 105;
int n, a[N], pref[N], dp[N][N];
int go(int l = 0, int r = n-1) {
    if (l >= r) return 0;
    auto &ret = dp[l][r];
    if (~ret) return ret;
    ret = 2e9;
    for (int sp = l; sp < r; sp++) {
        int L = pref[sp]-(l ? pref[l-1] : 0);
        int R = pref[r]-pref[sp];
        L%=100, R%=100;
        ret = min(ret, go(l, sp)+go(sp+1, r)+L*R);
    }
    return ret;
}

int main() {
    while(cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            pref[i] = a[i];
            if (i) pref[i]+=pref[i-1];
        }
        memset(dp, -1, sizeof dp);
        cout << go() << '\n';
    }
    return 0;
}
