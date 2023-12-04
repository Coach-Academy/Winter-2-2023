#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string s;
    set<string> st;
    while (cin >> s)
    {
        string t="";
        for (int i = 0; i < s.size(); ++i) {
            if (isalpha(s[i]))
            {
                s[i] = tolower(s[i]);
                t += s[i];
            }
            else if ( t.size())
            {
                st.insert(t);
                t = "";
            }
        }
        if ( t.size())
        st.insert(t);
    }
    for(auto &i : st)
        cout << i << endl;
    return 0;
}