#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &i : a) cin >> i;
        for (int i = 0; i < n - 1; ++i)
        {
            if(a[i] <= k)
            {
                k -= a[i];
                a[n - 1] += a[i];
                a[i] = 0;
            }
            else
            {
                a[i] -= k;
                a[n - 1] += k;
                break;
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
}