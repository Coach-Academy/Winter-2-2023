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
    ll a[n + 1];
    deque<ll>dq;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dq.push_back(i);
    }
    while (dq.size() > 1)
    {
        ll fst = dq.front();
        dq.pop_front();
        a[fst] -= m;
        if (a[fst] > 0)dq.push_back(fst);
    }
    cout << dq.front();
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