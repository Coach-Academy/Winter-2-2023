#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        s[i] = tolower(s[i]);
    }
    int cnt =0 ;
    for (char i = 'a'; i <= 'z'; ++i) {
        for (int j = 0; j < n; ++j) {
            if  (s[j] == i)
            {
                cnt++;
                break;
            }
        }
    }
    if ( cnt == 26)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}