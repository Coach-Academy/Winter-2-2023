#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 5;
    int steps = 0;
    for (int row = 1; row <= n; ++row) {
        for (int col = 1; col <= n; ++col) {
            int s;
            cin >> s;
            if (s == 1) {
                while (row < 3) {
                    row++;
                    steps++;
                }
                while (row > 3) {
                    row--;
                    steps++;
                }
                while (col < 3) {
                    col++;
                    steps++;
                }
                while (col > 3) {
                    col--;
                    steps++;
                }
                cout << steps << endl;
                return 0;
            }
        }
    }
}
