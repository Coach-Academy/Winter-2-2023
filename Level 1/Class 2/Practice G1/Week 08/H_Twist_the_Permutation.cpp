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
    ll a[n];
    for (int i = 0; i < n; i++)cin >> a[i];
    ll d[n];
    for (int i = n; i > 0; i--)
    {
        ll idx;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == i)
            {
                idx = j;
                break;
            }
        }
        d[i - 1] = i == 1 ? 0 : (idx + 1) % i;
        ll b[i];
        for (int j = 0; j < i; j++)
        {
            b[(j - idx + i - 1) % i] = a[j];
        }
        for (int j = 0; j < i; j++)
        {
            a[j] = b[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << d[i] << ' ';
    }
    cout << '\n';
    return;
}

int main()
{
    IO 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}