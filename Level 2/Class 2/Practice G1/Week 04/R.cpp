#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll ans = LLONG_MIN;
        ans = max(ans, a[0] * a[1] * a[2] * a[3] * a[n - 1]);
        ans = max(ans, a[0] * a[1] * a[n - 3] * a[n - 2] * a[n - 1]);
        ans = max(ans, a[n - 5] * a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1]);
        cout << ans << endl;
    }
    return 0;
}