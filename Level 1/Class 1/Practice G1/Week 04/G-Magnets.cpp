#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, g = 1;
    cin >> n;
    char a[n][2];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        if(a[i][1] == a[i + 1][0])
            g++;
    }
    cout << g;
}