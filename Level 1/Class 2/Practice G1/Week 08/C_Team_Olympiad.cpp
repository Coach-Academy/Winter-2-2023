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
    vector<ll>g1, g2, g3;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)g1.push_back(i);
        else if (x == 2)g2.push_back(i);
        else g3.push_back(i);
    }
    ll mn = min({g1.size(), g2.size(), g3.size()});
    cout << mn << '\n';
    for (int i = 1; i <= mn; i++)
    {
        cout << g1.back() << ' ' << g2.back() << ' ' << g3.back() << '\n';
        g1.pop_back();
        g2.pop_back();
        g3.pop_back();
    }
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