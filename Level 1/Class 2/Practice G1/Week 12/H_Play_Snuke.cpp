#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll OO = LLONG_MAX;

ll n, a[N], p[N], x[N];

ll getMin(ll i)
{
    if (i == n + 1)return OO;
    ll cost = OO;
    if (x[i] - a[i] > 0)cost = p[i];
    return min(cost, getMin(i + 1));
}

void solve()
{   
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> p[i] >> x[i];
    }
    ll ans = getMin(1);
    if (ans == OO)ans = -1;
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
