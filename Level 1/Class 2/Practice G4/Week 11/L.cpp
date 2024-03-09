#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        int l = n-1 , r = 0;
        for (int i = 0; i < n; ++i) {
            if ( a[i] != b[i])
            {
                l =  min( l , i);
                r = max( r , i);
            }
        }
        int k = abs(b[l] - a[l]);
        for (int i = l; i <= r; ++i) {
            a[i] += k;
        }
        if ( a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}