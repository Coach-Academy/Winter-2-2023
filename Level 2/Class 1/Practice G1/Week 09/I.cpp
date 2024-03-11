#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        int ans = 0;
        for (int mask = 0; mask < (1 << n); mask++) {
            int cnt = 0, last = -1;
            for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) { // take
                    if (arr[i] > last) {
                        cnt++;
                        last = arr[i];
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans;
    }
}