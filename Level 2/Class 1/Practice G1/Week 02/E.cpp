#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
        map<char, int> mp;
        for (int i = 0; i < key.size(); i++) {
            mp[key[i]] = i;
        }
        char ch;
        string s;
        cin >> ch >> s;
        for (int i = 0; i < s.size(); i++) {
            int idx = mp[s[i]];
            if (ch == 'R') {
                cout << key[idx - 1];
            } else {
                cout << key[idx + 1];
            }
        }
    }
}