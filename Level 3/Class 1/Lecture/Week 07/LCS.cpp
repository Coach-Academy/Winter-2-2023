#include <bits/stdc++.h>

using namespace std;

int n, m;
int dp[1001][1001];
string s1, s2;
int go(int i = 0, int j = 0) {
    if (i == n || j == m) return 0;
    auto &ret = dp[i][j];
    if (~ret) return ret;
    ret = 0;
    if (s1[i] == s2[j]) ret = max(ret, 1+go(i+1, j+1));
    ret = max(ret, go(i+1, j));
    ret = max(ret, go(i, j+1));
    return ret;
}

int main() {
//    for (auto &i : dp) i = -1;
    cin >> s1 >> s2;
    n = (int)s1.size(), m = (int)s2.size();
    memset(dp, -1, sizeof dp);
    cout << go();
    return 0;
}
