#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    bool exist[3]{};
    for (auto &i : s) exist[i-'a'] = true;
    int sm = exist[0]+exist[1]+exist[2];
    if (sm == 1) cout << 0 << '\n';
    else if (sm == 2) cout << (exist[1] ? 0 : -1) << '\n';
    else {
        ll ans = 2e18;
        for (char c1 : {'a', 'c'}) {
            int cur = 0, posB;
            ll tmp = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == c1) {
                    tmp+=i-cur;
                    cur++;
                }
                else if (s[i] == 'b') posB = i;
            }
            tmp+=max(0, posB-cur);
            ans = min(ans, tmp);
        }
        cout << ans << '\n';
    }
    return 0;
}
