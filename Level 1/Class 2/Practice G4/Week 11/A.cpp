#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int b,n,m;
    cin >> b >> n >> m;
    int a[n], c[m];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> c[i];
    }
    int mx = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ( a[i] + c[j] <= b)
            {
                mx = max( mx , a[i] + c[j]);
            }
        }
    }
    cout << mx << endl;

    return 0;
}