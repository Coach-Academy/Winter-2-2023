#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

char inv(char c)
{
    if (c == '(')return ')';
    if (c == '[')return ']';
    return '}';
}

void solve()
{
    string s;
    cin >> s;
    stack<char>st;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')st.push(s[i]);
        else 
        {
            if (st.empty() || s[i] != inv(st.top()))
            {
                cout << "NO\n";
                return;
            }
            else st.pop();
        }
    }
    if (st.empty())cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main()
{
    IO 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
