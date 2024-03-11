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
        int n,k;
        cin >> n >> k;
        map<int,ll> mp;
        ll ans = -1;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            int need = (k - (a[i] %k))%k;
            if ( need == 0)
                continue;

            // last  x where x%k == need
            // 0k + need
            // 1k + need
            // 2k + need
            // 3k + need
            if ( mp[need] == 0)
                mp[need] = need;
            else
                mp[need] += k;

            ans = max(ans , mp[need]);
        }
        cout << ans +1 << endl;
    }

    return 0;
}