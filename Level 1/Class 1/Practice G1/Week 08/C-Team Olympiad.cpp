#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        if (t == 1) a.push_back(i + 1);
        else if(t == 2) b.push_back(i + 1);
        else c.push_back(i + 1);
    }
    int mxteams = min(a.size(), min(b.size(), c.size()));
    cout << mxteams << '\n';
    while(mxteams--)
    {
        cout << a.back() << ' ' << b.back() << ' ' << c.back() << '\n';
        a.pop_back(), b.pop_back(), c.pop_back();
    }

}