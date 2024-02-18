#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, cnt = 0, x, y;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if(x == 1 and i != 0)
                ans.push_back(y);
        y = x;
    }
    ans.push_back(x);
    cout << ans.size()  << '\n';
    for(auto i : ans)
        cout << i << ' ';
}
