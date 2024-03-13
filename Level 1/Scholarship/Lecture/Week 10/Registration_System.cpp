#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{   
    int q;
    map<string, int>mp;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)cout << "OK\n";
        else cout << s << mp[s] << '\n';
        mp[s]++;
    }
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
