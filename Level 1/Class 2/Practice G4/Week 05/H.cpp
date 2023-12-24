#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if ( s[i] == '9' && i == 0)
            continue;

        char inv = '0' + ( '9' - s[i]);
        s[i] = min(inv, s[i]);
    }
    cout << s << endl;
    return 0;
}