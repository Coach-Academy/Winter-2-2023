#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    char c;
    string s;
    cin >> c >> s;
    string keyboard[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    map<char, pair<ll, ll>>mp;
    for (int i = 0; i < 3; i++)
        for (int j = 0; keyboard[i][j]; j++)
        {
            mp[keyboard[i][j]] = {i, j};
        }
    for (int i = 0; s[i]; i++)
    {
        auto pos = mp[s[i]];
        if (c == 'L')cout << keyboard[pos.first][pos.second + 1];
        else cout << keyboard[pos.first][pos.second - 1];
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
