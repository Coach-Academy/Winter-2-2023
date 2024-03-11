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
        // L         R
        //10 9 8 7 6 5 4 3 2 1 1 1 1 1 1 1 1

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<>());
        int l = 0, r = 0, ans = 0;
        while (l < n) {
            while (r < n && arr[l] < arr[r] * 2) {
                r++;
            }
            // r = n
            // found
            if (r != n) {
                ans++;
                r++;
            }
            l++;
        }
        int half = (n + 1) / 2;
        cout << max(n - ans, half);
    }
}