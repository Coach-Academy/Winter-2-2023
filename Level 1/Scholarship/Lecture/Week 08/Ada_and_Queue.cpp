#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

const int N = 2e5 + 5;
const ll MOD = 1e9 + 7;

void solve()
{
    int q;
    cin >> q;
    deque<int>dq;
    bool isReversed = 0;
    while (q--)
    {
        string s;
        cin >> s;
        if (isReversed)
        {
            if (s[0] == 'b')s[0] = 'f';
            else if (s[0] == 'f')s[0] = 'b';
            else if (s[0] == 't')s[0] = 'p';
            else if (s[0] == 'p') s[0] = 't';
        }
        if (s[0] == 'r')isReversed = 1 - isReversed;
        else if (s[0] == 't' || s[0] == 'p')
        {
            int x;
            cin >> x;
            if (s[0] == 't')dq.push_front(x);
            else dq.push_back(x);
        }
        else if (dq.empty())cout << "No job for Ada?\n";
        else if (s[0] == 'f')cout << dq.front() << '\n', dq.pop_front();
        else cout << dq.back() << '\n', dq.pop_back();
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
