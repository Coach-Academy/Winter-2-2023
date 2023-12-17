#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        while(k--)
        {
            int mnpos, mxpos, mx = -1e9, mn=1e9;
            for (int i = 0; i < n; ++i) {
                if(a[i] < mn)
                {
                    mnpos = i;
                    mn = a[i];
                }
            }
            for (int i = 0; i < n; ++i) {
                if(b[i] > mx)
                {
                    mxpos = i;
                    mx = b[i];
                }
            }
            if(a[mnpos] < b[mxpos])
                swap(a[mnpos], b[mxpos]);
        }

        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }
        cout << sum << '\n';
    }
}