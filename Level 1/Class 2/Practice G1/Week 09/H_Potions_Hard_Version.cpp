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
    priority_queue<ll, vector<ll>, greater<ll>>pq;
    ll ans = 0, h = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x >= 0)ans++, h += x;
        else 
        {
            if (h + x >= 0)ans++, h += x, pq.push(x);
            else if (not pq.empty() && pq.top() < x)
            {
                h -= pq.top();
                pq.pop();
                h += x;
                pq.push(x);
            }
        }
    }
    cout << ans;
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
