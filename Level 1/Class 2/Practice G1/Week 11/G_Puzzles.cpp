#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{   
    int n, m;
    cin >> n >> m;
    int a[m + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + m + 1);
    int mn = INT_MAX;
    for (int i = 1; i <= m - n + 1; i++)
    {
        mn = min(mn, a[i + n - 1] - a[i]);
    }
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
