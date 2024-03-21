#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll cur = 0;
        for (ll i = 0; i < 64; i++) {
            ll p = powl(3, i);
            cur += p;
            if (cur > n)break;
        }
        for (ll i = 63; i >= 0; i--) {
            ll p = powl(3, i);
            if (cur - p >= n) {
                cur -= p;
            }
        }
        cout << cur << '\n';
    }
}