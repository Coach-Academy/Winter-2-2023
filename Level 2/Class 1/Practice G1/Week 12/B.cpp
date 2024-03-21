#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        // 6 % 1 = 0
        // 6 % 2 = 0
        // 6 % 3 = 0

        // 6 % 4 = 2
        // 6 % 5 = 1
        // 6 % 6 = 0


        // 7 % 1 = 0
        // 7 % 2 = 1
        // 7 % 3 = 1

        // 7 % 4 = 3
        // 7 % 5 = 2
        // 7 % 6 = 1
        // 7 % 7 = 0
        int l, r;
        cin >> l >> r;
        cout << r % max(l, r / 2 + 1) << '\n';
    }
}