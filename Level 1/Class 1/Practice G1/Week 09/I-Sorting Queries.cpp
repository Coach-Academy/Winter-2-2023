#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    deque<int> q;
    priority_queue<int, vector<int>, greater<int>> q1;

    while(t--)
    {
        int p;
        cin >> p;
        if(p == 1)
        {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if(p == 2)
        {
            if(!q1.empty())
            {
                cout << q1.top() << '\n';
                q1.pop();
            }
            else
            {
                cout << q.front() << '\n';
                q.pop_front();
            }
        }
        else
        {
            while(!q.empty())
            {
                q1.push(q.front());
                q.pop_front();
            }
        }
    }
}