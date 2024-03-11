#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100005;
ll have[N],must[N];
ll n,magic;
bool can(ll num) {
    ll cur = magic;
    for (int i = 0; i < n; i++) {
        ll need = must[i] * num;
        if (need > have[i]) {
            cur -= (need - have[i]);
        }
        if (cur < 0)return 0;
    }
    return 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        cin >> n >> magic;
        for (int i = 0; i < n; i++)cin >> must[i];
        for (int i = 0; i < n; i++)cin >> have[i];
        ll l = 0, r = 2e9, ans;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (can(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans;
    }
}