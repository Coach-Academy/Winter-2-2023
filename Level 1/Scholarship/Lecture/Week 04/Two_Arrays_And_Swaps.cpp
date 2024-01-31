#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[i])
                swap(a[i], b[i]);
            else
                break;
        }
        int sm = 0;
        for (int i = 0; i < n; i++)
            sm += a[i];
        cout << sm << '\n';
    }
    return 0;
}