#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int arr[30];
int sol(int idx, int sum) {
    if (idx == n) {
        return (sum == k);
    }
    int ret;
    // take
    ret = sol(idx + 1, sum + arr[idx]);
    // leave
    ret = max(sol(idx + 1, sum), ret);
    return ret;
}
// 1 0 1 0 0
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        cin >> k >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (sol(0, 0))cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}