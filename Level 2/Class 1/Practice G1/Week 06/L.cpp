#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        set<pair<ll, pair<int, int>>> st;

        //1 3 4
        st.insert({sum, {0, n - 1}});

        // 4 (0 1)
        // 4 (2 2)
        // 3 (1 1)
        while (k--) {
            auto it = st.end();
            it--;
            ll ans = it->first;
            int l = it->second.first;
            int r = it->second.second;
            cout << ans << ' ';
            st.erase(it);
            if (l != r) {
                st.insert({ans - arr[l], {l + 1, r}});
                st.insert({ans - arr[r], {l, r - 1}});
            }
        }
    }
}