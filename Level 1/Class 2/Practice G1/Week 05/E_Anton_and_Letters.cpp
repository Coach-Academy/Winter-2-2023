#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int ans = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        bool yes = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == c)yes = 1;
        }
        ans += yes;
    }
    cout << ans;
    return 0;
}


/*
    s = ..... '\0'
    ascii => '\0' = 0
    condition (any number != 0) => true;
    else => false
*/