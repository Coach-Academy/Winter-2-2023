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
        pair<int, int> arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first >> arr[i].second;
        }
        sort(arr, arr + n);
        reverse(arr, arr + n);
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1].second > arr[i].second) {
                cout << "Happy Alex";
                return 0;
            }
        }
        cout << "Poor Alex";
    }
}