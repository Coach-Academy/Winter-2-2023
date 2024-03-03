#include <bits/stdc++.h>

using namespace std;

string a = " qwertyuiop asdfghjkl; zxcvbnm,./ ";

int main() {
    map<char, char> mp;
    char x;
    string s;
    cin >> x >> s;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != ' ') {
            if (x == 'R')
                mp[a[i]] = a[i - 1];
            else
                mp[a[i]] = a[i + 1];
        }
    }

    for (int i = 0; i < s.size(); ++i) {
        s[i] = mp[s[i]];
    }
    cout << s;
}