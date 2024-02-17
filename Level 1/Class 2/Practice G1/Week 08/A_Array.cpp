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
    vector<ll>l, g, z;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x < 0)l.push_back(x);
        else if (x > 0)g.push_back(x);
        else z.push_back(0);
    }
    cout << "1 " << l.back() << '\n';
    l.pop_back();
    if (g.empty())
    {
        cout << "2 " << l.back() << ' ';
        l.pop_back();
        cout << l.back() << '\n';
        l.pop_back();
    }
    else 
    {
        cout << "1 " << g.back() << '\n';
        g.pop_back();
    }
    for (auto x : l)z.push_back(x);
    for (auto x : g)z.push_back(x);
    cout << z.size() << ' ';
    for (auto x : z)cout << x << ' ';
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