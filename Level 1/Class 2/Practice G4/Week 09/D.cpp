#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        stack<char> st;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i) {
            if ( s[i] == ')' && st.size() && st.top() == '(')
                st.pop();
            else if ( s[i] == ']' && st.size() && st.top() == '[')
                st.pop();
            else if ( s[i] == '}' && st.size() && st.top() == '{')
                st.pop();
            else
            {
                st.push(s[i]);
            }
        }
        if ( st.size())
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}