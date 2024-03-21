#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum = 0, mx = LLONG_MIN;
bool can(ll num, ll query) {
    ll cur = num * sum;
    //       3  +  3
    return (cur + mx >= query);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n];
        int query[m];
        sum = 0, mx = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            mx = max(sum, mx);
        }
        for (int i = 0; i < m; i++) {
            cin >> query[i];
        }
        // need , num_op , i
        priority_queue<pair<ll, pair<ll, int>>> vec;
        for (int i = 0; i < m; i++) { // number of arrays
            if (query[i] <= mx || sum <= 0) { // zero arrays
                vec.push({-query[i], {0, i}});
                continue;
            }
            ll l = 0, r = 1e9, arrays = 0;
            while (l <= r) {
                ll mid = (r + l) / 2;
                if (can(mid, query[i])) {
                    arrays = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            vec.push({-(query[i] - (arrays * sum)), {(arrays * n), i}});
        }
        // part
        sum = 0;
        ll ans[m];
        memset(ans, -1, sizeof ans);
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            while (!vec.empty() && -vec.top().first <= sum) {
                ans[vec.top().second.second] = vec.top().second.first + i;
                vec.pop();
            }
        }
        for (int i = 0; i < m; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}