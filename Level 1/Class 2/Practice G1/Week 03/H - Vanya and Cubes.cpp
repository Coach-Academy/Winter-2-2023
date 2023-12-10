#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cost = 0, currLev = 0;
    cin >> n;
    while (n - cost >= 0) {
        n -= cost;
        currLev++;
        cost = 0;
        for (int i = 1; i <= currLev; ++i)
            cost = cost + i;
    }
    cout << currLev - 1 << endl;
}
