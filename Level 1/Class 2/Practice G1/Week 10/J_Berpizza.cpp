#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll q;
    cin >> q;
    set<pair<ll, ll>>s1, s2;
    ll idx = 1;
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll m;
            cin >> m;
            s1.insert({idx, m});
            s2.insert({-m, idx});
            idx++;
        }
        else if (t == 2)
        {
            cout << (*s1.begin()).first << ' ';
            s2.erase({-(*s1.begin()).second, (*s1.begin()).first});
            s1.erase(s1.begin());
        }
        else 
        {
            cout << (*s2.begin()).second << ' ';
            s1.erase({(*s2.begin()).second, -(*s2.begin()).first});
            s2.erase(s2.begin());
        }
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
