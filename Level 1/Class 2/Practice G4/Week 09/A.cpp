#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    queue<int> q;
    int t;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        if ( op  == 1)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if ( op == 2)
        {
            if ( q.size())
                q.pop();
        }
        else
        {
            if(q.empty())
                cout << "Empty!\n";
            else
                cout << q.front() << endl;
        }
    }

    return 0;
}