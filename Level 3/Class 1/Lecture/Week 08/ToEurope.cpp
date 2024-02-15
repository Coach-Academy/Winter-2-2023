#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int N = 1005;
int w[N], sp[N];
double dp[N][N];

int main() {
    int b, l, n;
    while(cin >> b >> l >> n, b) {
        l*=60;
        for (int i = 0; i < n; i++) cin >> w[i] >> sp[i];
        for (int i = 0; i <= n; i++) for (int j = 0; j <= n; j++) dp[i][j] = 2e9;
        dp[n][n] = 0;
        for (int cur = n-1; ~cur; cur--) {
            int mn = 2e9, sm = 0;
            for (int lst = cur; ~lst; lst--) {
                mn = min(mn, sp[lst]), sm+=w[lst];
                if (sm <= b) dp[lst][cur] = min(dp[lst][cur], 1.0*l/mn+dp[cur+1][cur+1]);
                dp[lst][cur] = min(dp[lst][cur], dp[lst][cur+1]);
            }
        }
        cout << fixed << setprecision(1) << dp[0][0] << '\n';
    }
    return 0;
}
