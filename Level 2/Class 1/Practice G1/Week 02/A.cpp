#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            st.insert(s[i]);
        }
        int si = st.size();
        if (si % 2 == 0) {
            cout << "CHAT WITH HER!";
        } else {
            cout << "IGNORE HIM!";
        }
    }
}