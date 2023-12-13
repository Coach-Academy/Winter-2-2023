#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int pre[n + 1];
        pre[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> pre[i];
            pre[i] += pre[i - 1];
        }
        int ans = 1e9, idx = 1;
        // 1 2 3 4 5       // 5 - 3 + 1
        for (int i = 1; i <= n - k + 1; i++) {
            int l = i;
            int r = i + k - 1;
            int val = pre[r] - pre[l - 1];
            if (val < ans) {
                idx = i;
                ans = val;
            }
        }
        cout << idx;
    }
}