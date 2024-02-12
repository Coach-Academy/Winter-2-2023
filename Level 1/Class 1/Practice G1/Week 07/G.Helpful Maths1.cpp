#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    while(s.find('+') != string::npos)
        s.erase(s.find('+'),1);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); ++i)
    {
        cout << s[i];
        if(i != s.size() - 1)
            cout << '+';
    }
}