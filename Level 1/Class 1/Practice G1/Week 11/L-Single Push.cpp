#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, diff = 0;
        cin >> n;
        bool f = true;
        vector<int> a(n), b(n), q;
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        q.push_back(0);
        for (int i = 0; i < n; ++i) {
            q.push_back(b[i] - a[i]);
        }
        q.push_back(0);
        for (int i = 0; i < q.size() - 1; ++i) {
            if(q[i] < 0)
            {
                f = false;
                break;
            }
            if(q[i] != q[i + 1]) diff++;
        }
        if(!f or diff > 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}