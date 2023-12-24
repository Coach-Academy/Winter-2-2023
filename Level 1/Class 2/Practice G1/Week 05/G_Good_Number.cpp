#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        bool f[k + 1] = {};
        for (int i = 0; s[i]; i++) {
            f[s[i] - '0'] = 1;
        }
        bool yes = 1;
        for (int i = 0; i <= k; i++) {
            if (f[i] == 0)yes = 0;
        }
        ans += yes;
    }
    cout << ans;
    return 0;
}
