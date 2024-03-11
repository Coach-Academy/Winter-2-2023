#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> x >> n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        int ans = 0;
        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) { // take
                    sum += arr[i];
                }
            }
            if (x == sum)ans = 1;
        }
        if (ans)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}