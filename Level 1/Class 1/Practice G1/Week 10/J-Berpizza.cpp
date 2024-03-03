#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    map<int, int> mp;
    multimap<int, int, greater<int>> ms;
    int cust = 1;
    while (t--)
    {
        int m, x;
        cin >> x;
        if(x == 1)
        {
            cin >> m;
            ms.insert({m, cust});
            mp[cust] = m;
            cust++;
        }
        else if(x == 2)
        {
            auto it = mp.begin();
            cout << it->first << ' ';
            ms.erase(it->second);
            mp.erase(it);
        }
        else
        {
            auto it = ms.begin();
            cout << it->second << ' ';
            mp.erase(it->second);
            ms.erase(it);
        }
    }
}