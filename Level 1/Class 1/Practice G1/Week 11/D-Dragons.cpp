#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        mp[a] += b;
    }
    for(auto i : mp)
    {
        if(s <= i.first) {
            cout << "NO";
            return 0;
        }
        s += i.second;
    }
    cout << "YES";
}