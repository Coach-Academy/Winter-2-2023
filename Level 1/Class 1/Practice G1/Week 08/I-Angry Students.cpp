#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int p = 0, ans = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            if(s[i] == 'P')
                p++;
            else if(s[i] == 'A')
                ans = max(ans, p), p = 0;
        }
        cout << ans << '\n';
    }
}