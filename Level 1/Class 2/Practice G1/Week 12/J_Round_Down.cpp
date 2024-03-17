#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

string s;

string solve(int i)
{
    if (i == s.size() || s[i] == '.')return "";
    return s[i] + solve(i + 1);
}

void solve()
{   
    cin >> s;
    cout << solve(0);
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
