#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, bad = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int mn = a[n - 1];
        for (int i = n - 1; i >= 0; --i) {
            if(a[i] > mn)
                bad++;
            else
                mn = a[i];
        }
        cout << bad << '\n';
    }
}