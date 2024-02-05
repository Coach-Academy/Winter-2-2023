#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mn = 1e9, mx = -1e9, mnpos, mxpos, ans = 0;
    cin >> n;
    int a;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if(a <= mn)
            mnpos = i, mn = a;

        if(a > mx)
            mxpos = i, mx = a;
    }
    ans = mxpos - 1 + n - mnpos; // mxpos - 0

    if(mnpos < mxpos)
        ans--;
     cout << ans;
}
