#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    stack<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if( st.size() && st.top()==s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    if ( st.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}