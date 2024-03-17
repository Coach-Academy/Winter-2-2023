#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll n, x, a[N];

void solve(ll i)
{
    if (i == n + 1)return;
    if (a[i] != x)cout << a[i] << ' ';
    solve(i + 1);
}

void solve()
{   
    cin >> n >> x;
    for (int i = 1; i <= n; i++)cin >> a[i];
    solve(1);
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
