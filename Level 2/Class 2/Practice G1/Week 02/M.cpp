#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
bool sys[(int) 5e5+1];
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int id = 1;
    queue<int> monocarp;
    priority_queue<pair<int,int>> polycarp;

    int q;
    cin >> q;
    while ( q--)
    {
        int op ;
        cin >> op;
        if ( op == 1)
        {
            int m ;
            cin >> m;
            monocarp.push(id);
            polycarp.push({m, -id});
            id++;
        }
        else if (  op == 2)
        {
             //monocarp
            while (sys[monocarp.front()] == 1)
                monocarp.pop();

            sys[monocarp.front()] = 1;
            cout << monocarp.front() << " ";
            monocarp.pop();
        }
        else if (op == 3)
        {
            while ( sys[ -polycarp.top().second] == 1)
                polycarp.pop();

            sys[ -polycarp.top().second] = 1;
            cout << -polycarp.top().second << " ";
            polycarp.pop();
        }
    }
    return 0;
}