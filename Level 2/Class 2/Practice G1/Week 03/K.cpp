#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
     int n,k;
     cin >> n >> k;
     vector<int> p(n), a(n) , t(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll ans =0;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        if ( t[i] == 1)
        {
            ans += a[i];
            a[i] = 0;
        }
        p[i] = a[i];
        if (i)
            p[i] += p[i-1];
    }
    int mx =0;
    for (int i = 0; i < n; ++i) {
        int l = i;
        int r = min(i+k-1,n-1);
        mx = max( mx , p[r] - (l ? p[l-1] : 0));
    }
    cout << ans+mx << endl;
    return 0;

}