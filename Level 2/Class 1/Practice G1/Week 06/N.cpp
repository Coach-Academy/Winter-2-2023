#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int a[3], b[5];
        for (int i = 0; i < 3; i++)cin >> a[i];
        for (int j = 0; j < 5; j++)cin >> b[j];

        a[0] -= b[0];
        a[1] -= b[1];
        a[2] -= b[2];
        if (a[0] < 0 || a[1] < 0 || a[2] < 0) {
            cout << "NO" << "\n";
            continue;
        }
        b[3] -= a[0];
        if (b[3] > 0)a[2] -= b[3];

        b[4] -= a[1];
        if (b[4] > 0)a[2] -= b[4];

        if (a[2] >= 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}