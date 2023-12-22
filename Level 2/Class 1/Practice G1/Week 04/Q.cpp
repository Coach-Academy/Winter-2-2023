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
        for (int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr + n);
        vector<int> vec;
        for (int i = 0; i < n / 2; i++) {
            vec.push_back(arr[i]);
            vec.push_back(arr[n - 1 - i]);
        }
        if (n % 2 == 1) {
            vec.push_back(arr[n / 2]);
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << vec[i] << ' ';
        }
        cout << '\n';
    }
}