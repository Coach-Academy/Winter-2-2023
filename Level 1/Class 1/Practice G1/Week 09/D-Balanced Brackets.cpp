#include <bits/stdc++.h>

using namespace std;

string isBalance(string s) {
    stack<char> st;
    string temp = "([{";
    for (int i = 0; i < s.size(); ++i) {
        if (temp.find(s[i]) != -1)
            st.push(s[i]);
        else {
            if (!st.empty()) {
                if ((s[i] == '}' and st.top() == '{') or (s[i] == ')' and st.top() == '(') or
                    (s[i] == ']' and st.top() == '['))
                    st.pop();
                else
                    return "NO";
            } else {
                return "NO";
            }
        }
    }
    if(st.empty())
        return "YES";
    else
        return "NO";
}

int main() {
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        cout << isBalance(s) << '\n';
    }
}