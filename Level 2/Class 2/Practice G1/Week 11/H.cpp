#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    while (cin >> n)
    {
        if ( n == 0)
            break;
        queue<int> q;
        for (int i = 1; i <= n; ++i) {
            q.push(i);
        }
        cout << "Discarded cards:";
        if ( n > 1)
            cout << " ";
        while (q.size() >= 2)
        {
             int f = q.front();
             q.pop();
             int s = q.front();
             q.pop();
             q.push(s);
             cout << f ;
             if (q.size() >= 2)
                 cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << q.front() << endl;
    }

    return 0;
}