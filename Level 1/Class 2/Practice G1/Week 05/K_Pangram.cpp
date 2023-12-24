#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    int cnt = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        bool yes = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == c)yes = 1;
        }
        cnt += yes;
    }
    if (cnt == 26)cout << "YES";
    else cout << "NO";
    return 0;
}
