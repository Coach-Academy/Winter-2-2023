#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

ll n;
ll a[N], b[N]; 

ll sumOfProduct(ll i)
{
   if (i == n + 1)return 0;
   return a[i] * b[i] + sumOfProduct(i + 1);
}

void solve()
{   
    cin >> n;
    for (int i = 1; i <= n; i++)cin >> a[i];
    for (int i = 1; i <= n; i++)cin >> b[i];
    cout << (sumOfProduct(1) == 0 ? "Yes\n" : "No\n");
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
