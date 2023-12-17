#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int wire[n];
    for (int i = 0; i < n; ++i) {
        cin >> wire[i];
    }
    int m;
    cin >> m;
    while(m--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        wire[x + 1] += wire[x] - y;
        wire[x - 1] += y - 1;
        wire[x] = 0;
    }
    for (int i = 0; i < n; ++i) {
        cout << wire[i] << '\n';
    }
}