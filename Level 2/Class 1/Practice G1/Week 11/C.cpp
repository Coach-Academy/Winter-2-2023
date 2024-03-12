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
        int x[n][5], mn[5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> x[i][j];
            }
        }
        // 2 4 4 4 4
        // 4 2 4 4 4
        // 4 4 2 4 4
        // 4 4 4 2 4
        // 4 4 4 4 2
        // 3 3 3 3 3

        int ans = 0;
        for (int i = 1; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < 5; j++) {
                if (x[ans][j] > x[i][j])cnt++;
            }
            if (cnt >= 3)ans = i;
        }
        //3
        //10 10 20 30 30
        //20 20 30 10 10
        //30 30 10 20 20
        int ok = 1;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            if(ans==i)continue;
            for (int j = 0; j < 5; j++) {
                if (x[ans][j] < x[i][j])cnt++;
            }
            if (cnt < 3)ok = 0;
        }
        if (ok)cout << ans + 1 << '\n';
        else cout << -1 << '\n';
    }
}