#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, l = 0, r = 0;
    cin >> n >> m;
    int c[n];
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        c[i] = a - b;
        l += a, r += b;
    }
    if(r > m)
        return cout << -1, 0;

    sort(c, c + n, greater<>());
    int ans = 0, i = 0;
    while(l > m)
    {
        l -= c[i];
        ans++;
        i++;
    }
    cout << ans;
}
