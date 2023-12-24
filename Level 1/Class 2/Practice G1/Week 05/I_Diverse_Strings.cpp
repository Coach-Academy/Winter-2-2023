#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool yes = 1;
        for (int i = 1; s[i]; i++) {
            if (s[i] - s[i - 1] != 1)yes = 0;
        }
        yes ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
