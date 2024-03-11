#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>lucky;
void sol(ll cur) {
    if (cur > 1e10)return;
    if (cur)lucky.push_back(cur);
    sol(cur * 10 + 4);
    sol(cur * 10 + 7);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        sol(0);
        sort(lucky.begin(), lucky.end());
        ll l, r;
        cin >> l >> r;
        // 8 8
        // 44
        ll ans = 0;
        for (int i = 0; i < lucky.size(); i++) {
            if (lucky[i] < l)continue;
            if (lucky[i] > r) {
                ans += (r - l + 1) * lucky[i];
                break;
            } else {
                ans += (lucky[i] - l + 1) * lucky[i];
                l = lucky[i] + 1;
            }
        }
        cout << ans;
    }
}