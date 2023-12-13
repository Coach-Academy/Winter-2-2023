#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fre[100000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll pre[n + 1];
        pre[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> pre[i];
            pre[i] += pre[i - 1];
        }
        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            l++;
            r++;
            cout << pre[r] - pre[l - 1] << '\n';
        }
    }
}