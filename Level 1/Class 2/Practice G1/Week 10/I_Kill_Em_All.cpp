#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n, r;
    cin >> n >> r;
    ll a[n + 2]{};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ll ans = 0, move = 0;
    for (int i = n; i; i--)
    {
        if (a[i] == a[i + 1])continue;
        if (a[i] - move <= 0)break;
        move += r;
        ans++;
    }
    cout << ans << '\n';
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
