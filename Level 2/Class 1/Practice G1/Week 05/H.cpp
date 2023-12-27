#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int up, n, ans = 1;
        cin >> n >> up;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if (a == up || a == 7 - up || b == up || b == 7 - up)ans = 0;
        }
        if (ans == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}