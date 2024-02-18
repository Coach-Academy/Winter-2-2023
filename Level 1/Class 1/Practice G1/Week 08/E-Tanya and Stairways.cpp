#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    vector<int> a(n + 5, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        if(a[i] >= a[i + 1])
            total++;
    }
    cout << total << '\n';
    for (int i = 1; i <= n; ++i) {
        if(a[i] >= a[i + 1])
            cout << a[i] << ' ';
    }
}