#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> st;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'a' and s[i] <= 'z')
            st.insert(s[i]);
    }
    cout << st.size();
}