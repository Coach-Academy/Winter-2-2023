#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> sk;
        for (int i = 0; i < s.size(); i++) {
            if (sk.empty()) {
                sk.push(s[i]);
            } else if (s[i] == ')' && sk.top() == '(') {
                sk.pop();
            } else if (s[i] == '}' && sk.top() == '{') {
                sk.pop();
            } else if (s[i] == ']' && sk.top() == '[') {
                sk.pop();
            } else {
                sk.push(s[i]);
            }
        }
        if (sk.empty()) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}