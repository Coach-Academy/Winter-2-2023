#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        bool yes = 0;
        for (int i = 0; s[i]; i++) {
            for (int right = 1; right <= t.size(); right++) {
                int left = t.size() - right;
                int cnt = 0;
                int js = i;
                int jt = 0;
                for (int k = 1; k <= right && js < s.size() && jt < t.size(); k++) {
                    if (s[js] == t[jt])cnt++;
                    js++; 
                    jt++;
                }
                js -= 2;
                for (int k = 1; k <= left && jt < t.size() && js >= 0; k++) {
                    if (s[js] == t[jt])cnt++;
                    js--;
                    jt++;
                }
                if (cnt == t.size())yes = 1;
            }
        }
        if (yes)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
