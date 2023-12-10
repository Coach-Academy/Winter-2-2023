#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        string s;
        getline(cin, s);
        set<char> st;
        for (int i = 1; i < s.size(); i ++) {
            if (isalpha(s[i]))st.insert(s[i]);
        }
        int ans = st.size();
        cout << ans;
    }
}