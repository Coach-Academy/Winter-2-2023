#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.front() >= 'a' and s.front() <= 'z')
        s[0] -= 32;

    cout << s;
}