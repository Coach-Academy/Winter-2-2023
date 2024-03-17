#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll solve(ll n, ll k)
{
    if (n <= k)return 1;
    return solve(n / 2, k) + solve((n + 1) / 2, k);
}

void solve()
{   
    ll n, k;
    while (cin >> n)
    {
        cin >> k;
        cout << solve(n, k) << '\n';
    }
    return;
}

int main()
{
    IO 
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
