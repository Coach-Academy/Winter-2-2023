#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s, ans = "";
        cin >> s;
        for (int i = 0; i < s.size(); i += 2) {
            ans.push_back(s[i]);
        }
        ans += s.back();
        cout << ans << '\n';
    }
}