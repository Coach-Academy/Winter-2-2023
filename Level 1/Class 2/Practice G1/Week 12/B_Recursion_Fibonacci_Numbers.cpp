#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll fib(ll n)
{
    if (n <= 1)return n;
    return fib(n - 1) + fib(n - 2);
}

void solve()
{   
    ll n;
    cin >> n;
    cout << fib(n);
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
