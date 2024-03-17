#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll n;

ll solve(ll day, ll sm)
{
    if (sm + day >= n)return day;
    return solve(day + 1, sm + day);
}

void solve()
{   
    cin >> n;
    cout << solve(1, 0);
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
