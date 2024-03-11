#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3;
ll must[N],cost[N],have[N],money;
bool can(ll num) {
    ll sum = 0;
    for (int i = 0; i < N; i++) {
        ll need = num * must[i];
        if (need > have[i]) {
            ll dif = need - have[i];
            sum += dif * cost[i];
        }
    }
    return sum <= money;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'B')must[0]++;
            else if (s[i] == 'S')must[1]++;
            else must[2]++;
        }
        for (int i = 0; i < N; i++) {
            cin >> have[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> cost[i];
        }
        cin >> money;

        ll l = 0, r = 1e13, ans = 0;
        while (l <= r) {
            ll mid = (r + l) / 2;
            if (can(mid)) {
                l = mid + 1;
                ans = mid;
            } else {
                r = mid - 1;
            }
        }
        cout << ans;
    }
}