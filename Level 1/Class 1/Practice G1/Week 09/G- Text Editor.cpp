#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    string s = "", c;
    stack<string> st;
    while(n--)
    {
        int op;
        cin >> op;
        if(op == 1)
        {
            cin >> c;
            st.push(s);
            s += c;
        }
        else if(op == 2)
        {
            int k;
            cin >> k;
            st.push(s);
            s.erase(s.size() - k);
        }
        else if(op == 3)
        {
            int pos;
            cin >> pos;
            cout << s[--pos] << '\n';
        }
        else
        {
            s = st.top();
            st.pop();
        }

    }
}