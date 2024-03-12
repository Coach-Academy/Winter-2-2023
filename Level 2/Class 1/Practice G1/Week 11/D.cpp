#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        int ok = 0;
        // a = 5
        // n = 25
        if (a == 1) {
            if ((n - 1) % b == 0)cout << "Yes" << '\n';
            else cout << "No"<<'\n';
            continue;
        }
        for (ll i = 1; i <= n; i *= a) {
            if ((n - i) % b == 0)ok = 1;
        }
        if (ok)cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
}