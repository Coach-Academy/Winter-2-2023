#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        ll ans = -1e18;
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ans = max(ans, arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[n - 4] * arr[n - 5]);
        ans = max(ans, arr[n - 1] * arr[n - 2] * arr[n - 3] * arr[0] * arr[1]);
        ans = max(ans, arr[n - 1] * arr[3] * arr[2] * arr[1] * arr[0]);
        cout << ans << '\n';
    }
}