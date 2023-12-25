#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, c;
    cin >> s;
    while(s.back() == '0')
        s.pop_back();

    c = s;
    reverse(s.begin(), s.end());
    if(s == c)
        cout << "Yes";
    else
        cout << "No";
}