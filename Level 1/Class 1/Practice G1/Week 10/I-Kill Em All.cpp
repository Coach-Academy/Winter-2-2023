#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b = 0;
        cin >> n >> r;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]] = 0;
        }
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < n; ++i) {
            if(!(freq[a[i]]))
            {
                if(a[i] - (b * r) <= 0) continue;
                else b++;
                freq[a[i]] = 1;
            }
        }
        cout << b << '\n';
    }
}