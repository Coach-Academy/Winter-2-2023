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
    int sm = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sm += abs(x);
    }
    cout << sm;
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
