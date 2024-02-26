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
        ll n;
        cin >> n;
        int cnt = 0;
        ll ans = 0;
        while (n) {
            if (n % 2 == 0) {
                ans += (1ll << cnt);
            }
            n /= 2;
            cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}