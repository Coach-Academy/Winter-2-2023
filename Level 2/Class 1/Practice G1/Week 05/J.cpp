#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        ll x;
        cin >> x;
        ll arrays = x / sum;
        ll rem = x % sum;
        ll ans = arrays * n;
        for (int i = 0; i < n; i++) {
            rem -= arr[i];
            ans++;
            if (rem < 0)break;
        }
        cout << ans;
    }
}