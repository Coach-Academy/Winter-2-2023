#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{   
    int a[3], b[3];
    for (int i = 0; i < 3; i++)cin >> a[i];
    for (int i = 0; i < 3; i++)cin >> b[i];
    int alice = 0, bob = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])alice++;
        else if (b[i] > a[i])bob++;
    }
    cout << alice << ' ' << bob;
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
