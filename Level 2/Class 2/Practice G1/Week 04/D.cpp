#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int mx = 1, cnt = 1, n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; ++i) {
            cnt++;
            if (cnt > a[i]) {
                mx = cnt;
            }
        }
        cout << mx << endl;
    }
    return 0;
}