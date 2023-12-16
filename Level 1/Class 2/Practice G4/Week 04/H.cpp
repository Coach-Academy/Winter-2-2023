#include<bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        int sum =0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        sort( a,a+n);
        sort(b,b+n, greater<>());
        for (int i = 0; i < k; ++i) {
            if (b[i] > a[i])
            {
                sum -= a[i];
                sum += b[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}