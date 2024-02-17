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
    deque<ll>dq;
    bool reversed = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (reversed)
        {
            if (s[0] == 't')s[0] = 'p';
            else if (s[0] == 'p')s[0] = 't';
            else if (s[0] == 'f')s[0] = 'b';
            else if (s[0] == 'b')s[0] = 'f';
        }
        if (s[0] == 'r')reversed = 1 - reversed;
        else if (s[0] == 'f' || s[0] == 'b')
        {
            if (dq.empty())cout << "No job for Ada?\n";
            else if (s[0] == 'f')cout << dq.front() << '\n', dq.pop_front();
            else cout << dq.back() << '\n', dq.pop_back();
        }   
        else 
        {
            ll x;
            cin >> x;
            if (s[0] == 't')dq.push_front(x);
            else dq.push_back(x);
        }
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
