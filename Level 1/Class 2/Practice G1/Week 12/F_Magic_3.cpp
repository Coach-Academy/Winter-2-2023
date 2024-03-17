#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll n, s, d, x[N], y[N];

bool solve(ll i)
{
   if (i == n + 1)return 0;
   if (x[i] < s && y[i] > d)return 1;
   return solve(i + 1);
}

void solve()
{   
    cin >> n >> s >> d;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    cout << (solve(1) ? "Yes" : "No");
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
