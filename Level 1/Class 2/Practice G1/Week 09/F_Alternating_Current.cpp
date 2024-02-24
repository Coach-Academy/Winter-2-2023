#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    stack<char>st;
    for (int i = 0; s[i]; i++)
    {
        if (st.size() && st.top() == s[i])st.pop();
        else st.push(s[i]);
    }
    st.empty() ? cout << "Yes" : cout << "No";
    return;
}

int main()
{
    IO 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
