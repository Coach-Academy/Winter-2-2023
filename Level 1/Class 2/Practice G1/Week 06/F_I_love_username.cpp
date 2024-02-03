#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (i == 1)
        {
            mn = mx = x;
        }
        else 
        {
            if (x < mn)ans++;
            if (x > mx)ans++;
            mn = min(mn, x);
            mx = max(mx, x);
        }
    }
    cout << ans;
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