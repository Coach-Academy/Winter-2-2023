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
    int a[n + 1] = {}, b[n + 1] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int fst = 0, lst = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            if (fst == 0)fst = i;
            lst = i;
        }
    }
    if (a[fst] > b[fst])
    {
        cout << "NO\n";
        return;
    }
    for (int i = fst + 1; i <= lst; i++)
    {
        if (a[fst] - b[fst] != a[i] - b[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    IO 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
