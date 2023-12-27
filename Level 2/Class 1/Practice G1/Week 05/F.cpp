#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        string s, ans = "";
        cin >> s;
        for (int i = 0; i < s.size(); i += 2) {
            ans += s[i];
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++) {
            cout << ans[i] << '+';
        }
        cout << ans.back();
    }
}