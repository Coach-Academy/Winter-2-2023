#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        string a, b;
        cin >> n >> k >> a >> b;
        int cnt1[27] = {0}, cnt2[27] = {0};
        for (int i = 0; i < n; i++) {
            cnt1[a[i] - 'a']++;
            cnt2[b[i] - 'a']++;
        }
        int ans = 1;
        for (int i = 0; i < 26; i++) {
            if (cnt1[i] < cnt2[i]) {
                ans = 0;
                break;
            }
            cnt1[i] -= cnt2[i];
            if (cnt1[i] % k != 0) {
                ans = 0;
                break;
            }
            cnt1[i + 1] += cnt1[i];
        }
        if (ans)cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
}