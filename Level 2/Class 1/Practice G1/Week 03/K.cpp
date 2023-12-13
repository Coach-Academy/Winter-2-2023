#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        //1 3 5 2 5 4
        //1 1 0 1 0 0
        // 1 OK
        // pre len (K) OK
        int n, k;
        cin >> n >> k;
        ll a[n + 1], b[n + 1], pre[n + 1], one[n + 1];
        pre[0] = one[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pre[i] = a[i];
            pre[i] += pre[i - 1];
        }
        ll sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
            if (b[i]) {
                sum += a[i];
            }
            one[i] = sum;
        }
        ll all = one[n], ans = 0;
        for (int i = 1; i <= n - k + 1; i++) {
            int l = i;
            int r = i + k - 1;
            ll cost = pre[r] - pre[l - 1];
            ll inter = one[r] - one[l - 1];
            ll val = all + cost - inter;
            ans = max(ans, val);
        }
        cout << ans;
    }
}