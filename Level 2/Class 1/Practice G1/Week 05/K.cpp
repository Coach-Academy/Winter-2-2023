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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int mn = 1e9;
        for (int i = 1; i < n; i++) {
            mn = min(mn, arr[i] - arr[i - 1]);
        }
        cout << mn << '\n';
    }
}