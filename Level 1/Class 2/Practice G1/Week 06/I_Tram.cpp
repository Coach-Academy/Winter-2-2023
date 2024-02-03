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
    ll inside = 0;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        inside -= a;
        inside += b;
        ans = max(ans, inside);
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