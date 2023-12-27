#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, d, up = 0;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > d)up = 1;
        }
        if (!up) {
            cout << "YES" << '\n';
            continue;
        }
        sort(arr, arr + n);
        if (arr[0] + arr[1] <= d) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }

    }
}