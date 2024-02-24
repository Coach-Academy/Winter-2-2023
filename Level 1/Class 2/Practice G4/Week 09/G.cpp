#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
stack<string> st;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s ="";
    while (n--)
    {
        int op;
        cin >> op;
        if ( op == 1)
        {
            string t;
            cin >> t;
            st.push(s);
            s += t;
        }
        else if ( op == 2)
        {
            int k;
            cin >> k;
            st.push(s);
            while (k--)
                s.pop_back();
        }
        else if (op == 3)
        {
            int k;
            cin >> k;
            cout << s[k-1] << endl;
        }
        else
        {
            s = st.top();
            st.pop();
        }
    }
    return 0;
}