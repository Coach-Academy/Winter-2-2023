#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = k; i >= 1; --i) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n << endl;
}
