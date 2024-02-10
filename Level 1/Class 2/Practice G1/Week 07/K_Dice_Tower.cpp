#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    ll n, top;
    cin >> n >> top;
    bool yes = 1;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        if (top == a || top == 7 - a || top == b || top == 7 - b)yes = 0;
    }
    if (yes == 1)cout << "YES";
    else cout << "NO\n";
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