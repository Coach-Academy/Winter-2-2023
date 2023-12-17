#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    int d[n];
    for (int i = 1; i < n; ++i) {
        cin >> d[i];
    }
    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; ++i) {
        ans += d[i];
    }
    cout << ans;
}