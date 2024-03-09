#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{   
    int b, n, m;
    cin >> b >> n >> m;
    int k[n + 1], d[m + 1];
    for (int i = 1; i <= n; i++)cin >> k[i];
    for (int i = 1; i <= m; i++)cin >> d[i];
    int mx = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (k[i] + d[j] > mx && k[i] + d[j] <= b)mx = k[i] + d[j];
        }
    }
    cout << mx;
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
