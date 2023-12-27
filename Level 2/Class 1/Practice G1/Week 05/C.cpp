#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;
        int ans = -1;
        int a[n], b[m];
        for (int i = 0; i < n; i++)cin >> a[i];
        for (int j = 0; j < m; j++)cin >> b[j];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = a[i] + b[j];
                if (sum <= k) {
                    ans = max(ans, sum);
                }
            }
        }
        cout << ans;
    }
}