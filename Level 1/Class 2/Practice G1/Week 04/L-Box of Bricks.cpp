#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, set = 1;
    while(cin >> n, n != 0)
    {
        int a[n], total = 0, moves = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total += a[i];
        }
        int avg = total / n;
        for (int i = 0; i < n; ++i) {
            if(a[i] > avg)
                moves += a[i] - avg;
        }
        cout << "Set #" << set++ << '\n' << "The minimum number of moves is " << moves << ".\n\n";
    }
}