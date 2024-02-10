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
    ll a[n + 1];
    ll sm = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sm += a[i];
    }
    ll x;
    cin >> x;
    ll idx = 0;
    ll cnt = x / sm;
    x = x - cnt * sm;
    idx += cnt * n;
    ll i = 1;
    while (x >= 0)
    {
        x -= a[i];
        idx++;
        i++;
    }
    cout << idx;
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