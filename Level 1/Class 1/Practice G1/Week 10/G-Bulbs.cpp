#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    set<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        while (x--)
        {
            int z;
            cin >> z;
            s.insert(z);
        }
    }
    if(s.size() != m) cout << "NO";
    else cout << "YES";
}