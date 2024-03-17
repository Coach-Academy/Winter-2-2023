#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll solve(ll n)
{
    if (n <= 9)return n;
    ll sm = 0;
    while (n > 0)
    {
        sm += n % 10;
        n /= 10;
    }
    return solve(sm);
}

void solve()
{   
    string s;
    ll k;
    cin >> s >> k;
    ll sm = 0;
    for (int i = 0; s[i]; i++)sm += (s[i] - '0');
    sm *= k;
    cout << solve(sm);
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
