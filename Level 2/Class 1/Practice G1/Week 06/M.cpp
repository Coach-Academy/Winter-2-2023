#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            int mn = min(k, arr[i]);
            arr[i] -= mn;
            arr[n - 1] += mn;
            k -= mn;
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
}