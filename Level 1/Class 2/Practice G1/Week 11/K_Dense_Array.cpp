#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{   
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        int mn = min(a[i], a[i - 1]);
        int mx = max(a[i], a[i - 1]);
        while (mn * 2 < mx)
        {
            mn *= 2;
            ans++;
        }
    }
    cout << ans << '\n';
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
