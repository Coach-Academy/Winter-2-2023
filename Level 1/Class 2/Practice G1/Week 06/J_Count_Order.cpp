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
    ll a[n + 1];
    ll b[n + 1];
    ll c[n + 1];
    for (int i = 1; i <= n; i++)cin >> a[i];
    for (int i = 1; i <= n; i++)cin >> b[i];
    for (int i = 1; i <= n; i++)c[i] = i;
    ll orderA, orderB, iteration = 1;
    do 
    {
        bool yesA = 1, yesB = 1;
        for (int i = 1; i <= n; i++)
        {
            if (c[i] != a[i])yesA = 0;
            if (c[i] != b[i])yesB = 0;
        }   
        if (yesA)orderA = iteration;
        if (yesB)orderB = iteration;
        iteration++;
    }while(next_permutation(c + 1, c + n + 1));
    cout << abs(orderA - orderB);
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