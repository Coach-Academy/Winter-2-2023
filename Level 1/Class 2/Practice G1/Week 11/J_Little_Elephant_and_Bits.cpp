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
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '0')
        {
            s.erase(i, 1);
            cout << s;
            return;
        }
    }
    s.pop_back();
    cout << s;
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
