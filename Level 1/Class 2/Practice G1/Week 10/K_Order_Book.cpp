#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n, s;
    cin >> n >> s;
    map<ll, ll>mps, mpb;
    for (int i = 1; i <= n; i++)
    {
        char c;
        ll p, q;
        cin >> c >> p >> q;
        if (c == 'S')mps[p] += q;
        else mpb[-p] += q;
    }
    vector<pair<ll, ll>>v;
    auto it = mps.begin();
    for (int i = 1; i <= s && it != mps.end(); i++, it++)
    {
        v.push_back({(*it).first, (*it).second}); 
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << "S " << v[i].first << ' ' << v[i].second << '\n';
    }
    it = mpb.begin();
    for (int i = 1; i <= s && it != mpb.end(); i++, it++)
    {
        cout << "B " << -(*it).first << ' ' << (*it).second << '\n'; 
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
