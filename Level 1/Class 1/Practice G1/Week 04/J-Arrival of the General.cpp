#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mn = 1e9, mx = -1e9, mnpos, mxpos, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] <= mn)
            mnpos = i, mn = a[i];

        if(a[i] > mx)
            mxpos = i, mx = a[i];
    }
    ans = mxpos + (n - 1) - mnpos;

    if(mnpos < mxpos)
        ans--;

    cout << ans;
}