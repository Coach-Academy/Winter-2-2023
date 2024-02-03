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
    ll mx = LLONG_MIN, mn = LLONG_MAX;
    ll fmx, lmn;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x > mx)
        {
            mx = x;
            fmx = i;
        }
        if (x <= mn)
        {
            mn = x;
            lmn = i;
        }
    }
    if (lmn < fmx)lmn++;
    cout << (fmx - 1) + (n - lmn);
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