#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, k, x;
   cin >> n >> k >> x;
   int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    reverse(a, a + n);
    for (int i = 0; i < k; ++i) {
        a[i] = x;
    }
    cout << accumulate(a, a + n, 0);
}
