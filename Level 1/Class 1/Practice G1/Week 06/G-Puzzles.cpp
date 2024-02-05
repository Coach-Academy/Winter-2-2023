#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, ans = 1e9;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    sort(a, a + m);
    int start = 0, end = n - 1;
    while(end < m)
    {
        ans = min(ans, a[end] - a[start]);
        start++, end++;
    }
    cout << ans;
}
