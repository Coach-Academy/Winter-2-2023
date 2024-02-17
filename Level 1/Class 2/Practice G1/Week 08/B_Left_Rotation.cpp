#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n, d;
    cin >> n >> d;
    ll ans[n];
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans[(i - d + n) % n] = x;
    }
    for (int i = 0; i < n; i++)cout << ans[i] << ' ';
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