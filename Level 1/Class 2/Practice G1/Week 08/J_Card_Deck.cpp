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
    vector<ll>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool f[n + 1] = {};
    ll FNT = n;
    vector<ll>ans;
    while (FNT != 0)
    {
        vector<ll>temp;
        while (f[FNT] == 0)
        {
            temp.push_back(a.back());
            f[a.back()] = 1;
            a.pop_back();
        }
        while (temp.empty() == false)
        {
            ans.push_back(temp.back());
            temp.pop_back();
        }
        while (f[FNT])FNT--;
    }
    for (int i = 0; i < n; i++)cout << ans[i] << ' ';
    cout << '\n';
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