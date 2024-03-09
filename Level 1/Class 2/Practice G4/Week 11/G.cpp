#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        int a[m];
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        sort(a,a+m);
        int mx = a[m-1];
        for (int i = 0; i+n-1 <m; ++i) {
            mx = min(mx , a[i+n-1] - a[i]);
        }
        cout << mx  << endl;

    }

    return 0;
}