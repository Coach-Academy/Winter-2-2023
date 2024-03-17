#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll a[105], n;

ll sm(ll i)
{
    if (i == n + 1)return 0;
    return a[i] + sm(i + 1);
}

void solve()
{   
    cin >> n;
    for (int i = 1; i <= n; i++)cin >> a[i];
    cout << sm(1) << '\n';
    return;
}

int main()
{
    IO 
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case "  << i << ": ";
        solve();
    }
    return 0;
}
