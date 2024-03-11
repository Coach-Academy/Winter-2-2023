#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll pw = 0;
        while ((l | (1LL << pw)) <= r) {
            l |= (1LL << pw);
            pw++;
        }
        cout << l << '\n';
    }
}