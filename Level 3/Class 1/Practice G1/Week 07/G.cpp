#include <bits/stdc++.h>

using namespace std;

int n;
int coins[] = {1, 5, 10, 25, 50};
long long dp[30010][5];
long long go(int rem = n, int lst = 0) {
    if (lst > 4 || rem < 0) return 0;
    if (rem == 0) return 1;
    auto &ret = dp[rem][lst];
    if (~ret) return ret;
    ret = go(rem, lst+1);
    ret+=go(rem-coins[lst], lst);
    return ret;
}

int main() {
    memset(dp, -1, sizeof dp);
    while(cin >> n) {
        long long res = go();
        if (res > 1) cout << "There are " << res << " ways to produce " << n << " cents change.\n";
        else cout << "There is only 1 way to produce " << n << " cents change.\n";
    }
    return 0;
}
