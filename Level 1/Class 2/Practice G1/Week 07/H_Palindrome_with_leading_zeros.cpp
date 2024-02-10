#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    ll cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')cnt++;
        else break;
    }
    string s2(cnt, '0');
    s = s2 + s;
    s2 = s;
    reverse(s2.begin(), s2.end());
    if (s == s2)cout << "Yes";
    else cout << "No";
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