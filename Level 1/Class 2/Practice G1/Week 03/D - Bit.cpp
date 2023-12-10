#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "++X" or s == "X++")
            x++;
        else
            x--;
    }
    cout << x << endl;
}
