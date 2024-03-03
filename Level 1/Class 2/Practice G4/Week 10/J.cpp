#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 5e5+7;
bool vis[N];
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    // 1 m
    // 2 mono
    // 3 poly

    queue<int> mono;
    priority_queue<pair<int,int>> poly;

    int n;
    cin >> n;
    int idx = 1;
    while (n--)
    {
        int op , x;
        cin >> op ;
        if (op == 1)
        {
            cin >> x;
            mono.push(idx);
            poly.push({x,-idx});
            idx++;
        }
        else if ( op == 2)
        {
            while (vis[mono.front()] == 1)
                mono.pop();

            vis[mono.front()] = 1;
            cout << mono.front() << " ";
            mono.pop();
        }
        else
        {
            while (vis[-poly.top().second] == 1)
                poly.pop();

            vis[-poly.top().second] = 1;
            cout << -poly.top().second << " ";
            poly.pop();
        }
    }

    return 0;
}