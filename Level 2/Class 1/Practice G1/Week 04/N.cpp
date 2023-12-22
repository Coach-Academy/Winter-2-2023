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
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            vec.push_back({a, -b});
        }
        sort(vec.rbegin(), vec.rend());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] == vec[k - 1])ans++;
        }
        cout << ans;
    }
}