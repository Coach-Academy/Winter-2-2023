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
    ll a[n + 1];
    for (int i = 1; i <= n; i++)cin >> a[i];
    sort(a + 1, a + n + 1);
    if (a[n] <= d || a[1] + a[2] <= d)cout << "YES\n";
    else cout << "NO\n";
    return;
}

int main()
{
    IO 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}