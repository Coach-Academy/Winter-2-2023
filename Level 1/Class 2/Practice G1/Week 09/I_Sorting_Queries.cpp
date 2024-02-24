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
    priority_queue<int, vector<int>, greater<int>>pq;
    queue<int>qu;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            qu.push(x);
        }
        else if (t == 2)
        {
            if (pq.size())
            {
                cout << pq.top() << '\n';
                pq.pop();
            }
            else 
            {
                cout << qu.front() << '\n';
                qu.pop();
            }
        }
        else 
        {
            while (qu.size())
            {
                pq.push(qu.front());
                qu.pop();
            }
            
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
