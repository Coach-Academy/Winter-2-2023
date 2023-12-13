#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fre[100000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, num, d;
        cin >> n >> d;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> num;
            fre[num]++;
        }
        for (int i = 0; i <= 20000; i++) {
            ans += fre[i] * fre[i + d] * fre[i + (2 * d)];
        }
        cout << ans;
    }
}