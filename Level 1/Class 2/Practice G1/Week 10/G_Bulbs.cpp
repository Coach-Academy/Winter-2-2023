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
    set<ll>bulbs;
    while (n--)
    {
        ll x;
        cin >> x;
        while (x--)
        {
            ll y;
            cin >> y;
            bulbs.insert(y);
        }
    }
    if (bulbs.size() == m)cout << "YES";
    else cout << "NO";
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
