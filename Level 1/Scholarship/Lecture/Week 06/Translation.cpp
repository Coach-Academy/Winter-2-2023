#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    cout << (s == t ? "YES" : "NO");
    return;
}

int main() 
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}