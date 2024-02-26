#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ll long long
int main() {
    fast;
    int t, op, x;
    cin >> t;
    queue<int> q;
    while(t--)
    {
        cin >> x;
        if(x == 1)
        {
            cin >> op;
            q.push(op);
        }
        else if(x == 2)
        {
            if(!q.empty())
                q.pop();
        }
        else
        {
            if(!q.empty())
                cout << q.front() << '\n';
            else
                cout << "Empty!\n";
        }
    }

}