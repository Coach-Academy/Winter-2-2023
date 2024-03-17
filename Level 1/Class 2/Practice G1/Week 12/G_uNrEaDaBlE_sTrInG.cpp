#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

string s;

bool solve(ll i)
{
    if (i == s.size())return 1;
    if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z')return solve(i + 1);
    if (i % 2 == 1 && s[i] >= 'A' && s[i] <= 'Z')return solve(i + 1);
    return 0;
}

void solve()
{   
    cin >> s;
    cout << (solve(0) ? "Yes" : "No");
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
