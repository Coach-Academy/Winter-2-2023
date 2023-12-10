#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int x = 1; x <= n; ++x) {
        if (n % x == 0) {
            bool lucky = true;
            int tmp = x;
            while (tmp > 0) {
                int lastDigit = tmp % 10;
                tmp = tmp / 10;
                if (lastDigit != 4 and lastDigit != 7)
                    lucky = false;
            }
            if (lucky) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";

}
