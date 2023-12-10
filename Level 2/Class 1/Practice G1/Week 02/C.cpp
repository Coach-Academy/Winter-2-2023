#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, m, num, ans = 0;
        cin >> n >> m;
        map<int, bool> mp;
        for (int i = 0; i < n; i++) {
            cin >> num;
            mp[num] = 1;
        }
        for (int i = 0; i < m; i++) {
            cin >> num;
            if (mp[num])ans++;
        }
        cout << ans << '\n';
    }
}