#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{   
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)cin >> a[i];
    for (int i = 1; i < n && k; i++)
    {
        int mn = min(a[i], k);
        a[i] -= mn;
        a[n] += mn;
        k -= mn;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
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
