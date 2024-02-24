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
    stack<int>st;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (t == 2)
        {
            if (st.size())st.pop();
        }
        else 
        {
            if (st.empty())cout << "Empty!\n";
            else cout << st.top() << '\n';
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
