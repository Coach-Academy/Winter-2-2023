#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end()); // +++112344
    int index = s.rfind('+');
    for (int i = index + 1; i < s.size(); ++i)
    {
        cout << s[i];
        if(i != s.size() - 1)
            cout << '+';
    }
}