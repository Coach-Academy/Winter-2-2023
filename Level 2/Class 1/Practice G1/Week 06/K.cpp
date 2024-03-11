#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        if (b >= 0) {
            cout << a * n + b * n << '\n';
            continue;
        }
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (s[i - 1] == '0')cnt0++;
                else cnt1++;
            }
        }
        if (s.back() == '0')cnt0++;
        else cnt1++;
        cout << a * n + (min(cnt0, cnt1) + 1) * b << '\n';
    }
}