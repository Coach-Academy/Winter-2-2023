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
    string s = "";
    stack<pair<int, string>>st;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            string s2;
            cin >> s2;
            s += s2;
            st.push({1, s2});
        }
        else if (t == 2)
        {
            int k;
            cin >> k;
            string s2 = "";
            while (k--)
            {
                s2.push_back(s.back());
                s.pop_back();
            }
            reverse(s2.begin(), s2.end());
            st.push({2, s2});
        }
        else if (t == 3)
        {
            int k;
            cin >> k;
            cout << s[k - 1] << '\n';
        }
        else 
        {
            if (st.top().first == 1)
            {
                int k = st.top().second.size();
                while (k--)
                {
                    s.pop_back();
                }
            }
            else 
            {
                s += st.top().second;
            }
            st.pop();
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
