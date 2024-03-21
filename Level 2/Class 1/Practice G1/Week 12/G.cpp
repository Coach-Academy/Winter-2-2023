#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 && y1 == y2) {
            cout << "0 0 0";
            continue;
        }
        if (x1 == x2 || y1 == y2) {
            cout << 1 << ' ';
        } else {
            cout << 2 << ' ';
        }
        if ((x1 + y1) % 2 != (x2 + y2) % 2) {
            cout << 0 << ' ';
        } else {
            if (abs(x1 - x2) == abs(y1 - y2)) {
                cout << 1 << ' ';
            } else {
                cout << 2 << ' ';
            }
        }
        // 2 0
        cout << max(abs(x1 - x2), abs(y1 - y2));
    }
}