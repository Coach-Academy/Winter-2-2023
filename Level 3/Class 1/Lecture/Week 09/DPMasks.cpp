#include <bits/stdc++.h>

using namespace std;

const int N = 20;
int dp[N][1<<N], dist[N][N];

string convTobase(int n, int base) {
    string s;
    while(n) {
        int d = n%base;
        n/=base;
        s.push_back(d+'0');
    }
    reverse(s.begin(), s.end());
    return s;
}

int getIthDigit(int n, int base, int i) {
    while(i--) n/=base;
    return n%base;
}

int setIthDigit(int n, int base, int i, int val) {
    int od = getIthDigit(n, base, i);
    int add = val-od;
    n+=(int)pow(base, i)*add;
    return n;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int msk = 0; msk < (1<<n); msk++) {
            dp[i][msk] = 2e9;
        }
    }
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int msk = 0; msk < (1<<n); msk++) {
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                if (msk>>j&1^1) {
                    dp[j][msk|(1<<j)] = min(dp[j][msk|(1<<j)], dp[i][msk]+dist[i][j]);
                }
            }
        }
    }
    cout << dp[0][(1<<n)-1] << '\n';
    return 0;
}
