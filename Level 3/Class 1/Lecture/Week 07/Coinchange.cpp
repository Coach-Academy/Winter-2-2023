#include <bits/stdc++.h>

using namespace std;

int n;
int coins[] = {1, 5, 10, 25, 50};
int dp[10010][5];
int go(int sm = 0, int lst = 0) {
    if (lst > 4 || sm > n) return 0;
    if (sm == n) return 1;
    auto &ret = dp[sm][lst];
    if (~ret) return ret;
    ret = go(sm, lst+1);
    ret+=go(sm+coins[lst], lst);
    return ret;
}

int main() {
//    for (auto &i : dp) i = -1;
    cin >> n;
    memset(dp, -1, sizeof dp);
    cout << go();
    return 0;
}
