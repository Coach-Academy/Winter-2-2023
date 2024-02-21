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
    ll ans = 0;
    
    // O(n)
    // for (int i = 1; i <= n; i++)
    // {
    //     ans += i;
    // }

    // O(1)
    ans = n * (n + 1) / 2;

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
