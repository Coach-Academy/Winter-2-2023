#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        ll n, r, avg;
        cin >> n >> r >> avg;
        vector<pair<int, int>> vec;
        ll total = 0;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            total += a;
            vec.push_back({b, a});
        }
        // sum / n = avg
        ll need = n * avg;
        need -= total;
        need = max(0ll, need);
        sort(vec.begin(), vec.end());
        ll ans = 0;
        //5 5 4
        //2 3


        //2 5
        //4 7
        for (int i = 0; i < n; i++) {
            ll mn = min(need, r - vec[i].second);
            ans += mn * vec[i].first;
            need -= mn;
        }
        cout << ans;
    }
}