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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int ans = 0;
        while (vec[(n - 1) / 2] != k) {
            vec.push_back(k);
            sort(vec.begin(), vec.end());
            ans++;
            n++;
        }
        cout << ans << '\n';
    }
}