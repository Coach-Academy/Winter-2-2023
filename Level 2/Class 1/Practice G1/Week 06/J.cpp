#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int fre[n + 1];
        memset(fre, -1, sizeof fre);
        int ans = 1e9, num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (fre[num] != -1) {
                // r - l + 1
                ans = min(ans, i - fre[num] + 1);
            }
            fre[num] = i;
        }
        if (ans == 1e9) {
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }
    }
}