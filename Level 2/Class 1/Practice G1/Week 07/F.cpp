#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int arr[100005];
//
// 1 2 3 4 5
bool can(ll len) {
    ll cnt = 0, cover = -1;
    for (int i = 0; i < n; i++) {
        if (cover < arr[i]) {
            cnt++;
            cover = arr[i] + len - 1;
        }
    }
    return cnt <= k;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n>>k;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll l = 1, r = 2e9, ans;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (can(mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
}