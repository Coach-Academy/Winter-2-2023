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
    set<char>st;
    for (int i = 0; s[i]; i++)
    {
        st.insert(s[i]);
    }
    if (st.size() % 2)cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
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
