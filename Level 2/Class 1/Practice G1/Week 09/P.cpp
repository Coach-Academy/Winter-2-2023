#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        // 110

        // 011
        // 001
        // 101
        // 111

        // 101
        // 011
        // 111
        ll n;
        cin >> n;
        bitset<61> bt(n);
        ll ans = 0, temp = 0;
        for (ll i = 0; i < 60; i++) {
            if (!bt[i]) {
                temp += (1LL << i);
            } else {
                ans += temp;
                temp = 0;
            }
        }
        cout << ans << '\n';
    }
}