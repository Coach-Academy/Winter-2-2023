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
    string word[3] = {"insert", "removeMin", "getMin"};
    priority_queue<int, vector<int>, greater<int>>pq;
    vector<pair<string, int>>ans;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == word[0])
        {
            int x;
            cin >> x;
            pq.push(x);
            ans.push_back({word[0], x});
        }
        else if (s == word[1])
        {
            if (pq.empty())
            {
                pq.push(1);
                ans.push_back({word[0], 1});
            }
            pq.pop();
            ans.push_back({word[1], -1});
        }
        else 
        {
            int x;
            cin >> x;
            while (pq.size() && pq.top() < x)
            {
                pq.pop();
                ans.push_back({word[1], -1});
            }
            if (pq.empty() || pq.top() > x)
            {
                pq.push(x);
                ans.push_back({word[0], x});
            }
            ans.push_back({word[2], x});
        }
    }
    cout << ans.size() << '\n';
    for (auto x : ans)
    {
        cout << x.first << ' ';
        if (x.first != word[1])cout << x.second;
        cout << '\n';
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
