#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =200005;
int pre[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k, q, l, r;
        cin >> n >> k >> q;
        for (int i = 0; i < n; i++) {
            cin >> l >> r;
            pre[l]++;
            pre[r + 1]--;
        }
        for (int i = 1; i < N; i++) {
            pre[i] += pre[i - 1];
        }
        for (int i = 1; i < N; i++) {
            if (pre[i] >= k) {
                pre[i] = 1;
            } else pre[i] = 0;

            pre[i] += pre[i - 1];
        }
        while (q--) {
            cin >> l >> r;
            cout << pre[r] - pre[l - 1] << '\n';
        }

    }
}