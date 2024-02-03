#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll s[5];
    s[0] = 0;
    ll cnt = 0;
    for (int i = 1; i <= 4; i++)
    {
        cin >> s[i];
    }
    sort(s + 1, s + 5);
    for (int i = 1; i <= 4; i++)
    {
        if (s[i] != s[i - 1])cnt++;
    }
    cout << 4 - cnt;
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