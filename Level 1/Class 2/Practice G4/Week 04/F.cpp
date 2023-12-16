#include<bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cnt = 0, mn = a[n - 1];
        for (int i = n - 1; i >= 0; --i) {
            mn = min(mn, a[i]);
            if (a[i] > mn)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}