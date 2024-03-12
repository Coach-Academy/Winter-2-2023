#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        // 1 1 1 1
        // 2 5 8 11
        int n, k, num;
        cin >> n >> k;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++) {
            cin >> num;
            int rem = num % k;
            if (rem)mp[k - rem]++;
        }
        ll ans = 0;
        for (auto it: mp) {
            ll cost = it.first + (it.second - 1) * k + 1;
            ans = max(ans, cost);
        }
        cout << ans << '\n';
    }
}