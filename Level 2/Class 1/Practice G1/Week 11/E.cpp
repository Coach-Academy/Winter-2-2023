#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        // 2 4 2
        // 2 3 3
        // 8 3 6 11 5 2 1 7 10 4          sum = 57 % 10 = 7
        // 5 5 5 6 6 6  6  6  6 6
        // 0 0 0 1 1 1 1 1 1 1 1 1
        int n, num;
        cin >> n;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> num;
            sum += num;
        }
        ll one = (sum % n);
        cout << (n - one) * one << '\n';
    }
}