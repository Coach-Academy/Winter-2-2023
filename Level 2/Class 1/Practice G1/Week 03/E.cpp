#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fre[100005];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int pre[n + 1] = {0};
        s = '*' + s;
        for (int i = 1; i <= n; i++) {
            if (s[i] == s[i - 1]) {
                pre[i] = 1;
            }
            pre[i] += pre[i - 1];
        }
        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pre[r] - pre[l] << '\n';
        }
    }
}