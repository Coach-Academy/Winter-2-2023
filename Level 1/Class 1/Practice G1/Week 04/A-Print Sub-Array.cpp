#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, r;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> l >> r;
    l--, r--;
    for (int i = l; i <= r; ++i) {
        cout << arr[i] << ' ';
    }
}
