#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0, first, last;
        cin >> n >> first;
        for (int i = 1; i < n; ++i) // 1 2 3 4 5 5
        {
            cin >> last;
            int mn = min(first, last), mx = max(first, last);
            while(mn * 2 < mx)
                ans++, mn *= 2;
            first = last;
        }
        cout << ans << '\n';
    }
}