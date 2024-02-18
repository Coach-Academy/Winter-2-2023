#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), pos(1e5 + 5);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        int last = n;
        for (int i = n; i >= 1; --i) {
            if(pos[i] < last)
            {
                for (int j = pos[i]; j < last; ++j) {
                    cout << a[j] << ' ';
                }
                last = pos[i];
            }
        }
        cout << '\n';
    }
}