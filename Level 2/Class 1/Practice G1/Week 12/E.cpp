#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        ll n, ans = 0;
        cin >> n;
        for (int i = 1; i <= 9; i++) {
            ll num = i;
            while (num <= n) {
                num = num * 10 + i;
                ans++;
            }
        }
        cout << ans << '\n';
    }
}