#include <iostream>
#include <iomanip>

using namespace std;

const int N = 1005;
int w[N], sp[N];
double dp[N][N];
int vis[N][N];
int b, l, n;
double go(int tc, int cur = 0, int lst = 0, int tot = w[0], int mn = sp[0]) {
    if (cur == n) {
        if (lst == n) return 0;
        return 2e9;
    }
    double &ret = dp[cur][lst];
    if (vis[cur][lst] == tc) return ret;
    vis[cur][lst] = tc;
    ret = 2e9;
    if (tot+w[cur+1] <= b) ret = min(ret, go(tc, cur+1, lst, tot+w[cur+1], min(mn, sp[cur+1])));
    ret = min(ret, go(tc, cur+1, cur+1, w[cur+1], sp[cur+1])+1.0*l/mn);
    return ret;
}

int main() {
    int tc = 1;
    while(cin >> b >> l >> n, b) {
        l*=60;
        for (int i = 0; i < n; i++) cin >> w[i] >> sp[i];
        cout << fixed << setprecision(1) << go(tc) << '\n';
        tc++;
    }
    return 0;
}
