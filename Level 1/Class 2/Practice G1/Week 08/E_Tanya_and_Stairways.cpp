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
    ll a[n + 1];
    vector<ll>ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 1 && i != 1)ans.push_back(a[i - 1]);
    }
    ans.push_back(a[n]);
    cout << ans.size() << '\n';
    for (auto x : ans)cout << x << ' ';
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