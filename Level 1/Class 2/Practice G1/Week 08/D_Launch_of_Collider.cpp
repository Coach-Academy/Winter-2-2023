#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    ll lstR = -1, mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (s[i] == 'R')lstR = x;
        else if (lstR != -1)mn = min(mn, (x - lstR) / 2);
    }
    if (mn == LLONG_MAX)mn = -1;
    cout << mn;
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