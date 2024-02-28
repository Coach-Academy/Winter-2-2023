#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    int n;
    vector<int>v1, v2, v3;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)v1.push_back(x);
        else if (x > 0)v2.push_back(x);
        else v3.push_back(x);
    }
    if (v2.empty())
    {
        v2.push_back(v1.back());
        v1.pop_back();
        v2.push_back(v1.back());
        v1.pop_back();
    }
    if (v1.size() % 2 == 0)
    {
        v3.push_back(v1.back());
        v1.pop_back();
    }
    cout << v1.size() << ' ';
    for (auto x : v1)cout << x << ' ';
    cout << '\n';
    cout << v2.size() << ' ';
    for (auto x : v2)cout << x << ' ';
    cout << '\n';
    cout << v3.size() << ' ';
    for (auto x : v3)cout << x << ' ';
    cout << '\n';
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
