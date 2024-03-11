#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int l = 0, r = 0, ans = 0;
        ll sum = 0;
        while (l < n) {
            while (r < n && sum + arr[r] <= k) {
                sum += arr[r];
                r++;
            }
            // r can't
            // r = n
            ans = max(ans, r - l);
            sum -= arr[l];
            l++;
        }
        cout << ans;
    }
}