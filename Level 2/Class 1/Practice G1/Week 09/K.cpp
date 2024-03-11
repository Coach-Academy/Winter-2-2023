#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bitset<33> bt(n);
        int a;
        if (bt.count() == 1) {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < 33; i++) {
            if (bt[i] == 1) {
                a = (1 << i);
                break;
            }
        }
        // a ^ b = n
        // a ^ n = b

        cout << a << ' ' << (n ^ a) << '\n';
    }
}