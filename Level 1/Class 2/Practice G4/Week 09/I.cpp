#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
priority_queue<int , vector<int>, greater<int>> pq;
queue<int> q;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int op , x;
        cin  >> op ;
        if ( op == 1)
        {
            cin >> x;
            q.push(x);
        }
        else if ( op == 2)
        {
            if ( pq.size())
            {
                cout << pq.top() << endl;
                pq.pop();
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else
        {
            while (q.size())
            {
                pq.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}