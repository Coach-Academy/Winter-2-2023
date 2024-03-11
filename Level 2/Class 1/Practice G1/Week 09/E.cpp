#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n = 10, num;
        cin >> num;
        vector<ll> su_lucky;
        for (int mask = 0; mask < (1 << n); mask++) {
            int cnt4 = 0, cnt7 = 0;
            ll cur = 0;
            for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) { // take
                    cur = cur * 10 + 7;
                    cnt7++;
                } else {
                    cnt4++;
                    cur = cur * 10 + 4;
                }
                if (cnt4 == cnt7)su_lucky.push_back(cur);
            }
        }
        ll ans = 1e18;
        for (int i = 0; i < su_lucky.size(); i++) {
            if (su_lucky[i] >= num) {
                ans = min(ans, su_lucky[i]);
            }
        }
        cout << ans;
    }
}