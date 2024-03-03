#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if(mp.count(s))
        {
            cout << s << mp[s] << '\n';
            mp[s]++;
        }
        else
        {
            cout << "OK\n";
            mp[s] = 1;
        }
    }
}