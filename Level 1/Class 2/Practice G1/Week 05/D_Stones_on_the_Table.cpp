#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += (s[i] == s[i + 1]);
    }
    cout << ans;
    return 0;
}
