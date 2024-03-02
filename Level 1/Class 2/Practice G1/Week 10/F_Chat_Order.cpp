#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll q;
    cin >> q;
    stack<string>st;
    map<string, bool>mp;
    while (q--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    while (not st.empty())
    {
        if (mp[st.top()] == 0)
        {
            mp[st.top()] = 1;
            cout << st.top() << '\n';
        }
        st.pop();
    }
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
