#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, b, ans = -1;
    cin >> b >> n >> m;
    vector<int> a(n), c(m);
    for(auto &i : a) cin >> i;
    for(auto &i : c) cin >> i;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(a[i] + c[j] <= b)
                ans = max(ans, a[i] + c[j]);
        }
    }
    cout << ans;
}