#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 0; i < 26; ++i) {
        int s;
        cin >> s;
        char ans = s + 97 - 1;
        cout << ans;
    }
}
