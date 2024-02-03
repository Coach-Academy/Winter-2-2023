#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll diff[n + 1], sumA = 0, sumB = 0;
    for (int i = 1; i <= n; i++)
    {
        ll a, b;
        cin >> a >> b;
        sumA += a;
        sumB += b;
        diff[i] = a - b;
    }
    if (sumB > m)
    {
        cout << -1;
        return;
    }
    sort(diff + 1, diff + n + 1, greater<ll>());
    ll ans = 0;
    for (int i = 1; sumA > m; i++)
    {
        sumA -= diff[i];
        ans++;
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