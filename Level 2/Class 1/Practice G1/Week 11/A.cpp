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
        if (n % 3 == 0)cout << n / 3 << ' ' << n / 3 << '\n';
        if (n % 3 == 1)cout << n / 3 + 1 << ' ' << n / 3 << '\n';
        if (n % 3 == 2)cout << n / 3 << ' ' << n / 3 + 1 << '\n';
    }
}