#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    map<char, bool>mp;
    for (int i = 0; s1[i]; i++)mp[s1[i]] = 1;
    for (int i = 0; s2[i]; i++)
    {
        if (mp[s2[i]])
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
