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
    string s2;
    for (int i = 0; i < s.size(); i += 2)
    {
        s2.push_back(s[i]);
    }
    sort(s2.begin(), s2.end());
    for (int i = 0, j = 0; i < s.size(); i += 2, j++)
    {
        s[i] = s2[j];
    }
    cout << s;
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