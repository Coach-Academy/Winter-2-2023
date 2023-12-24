#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 1; i < n; ++i) {
            int mn = min(a[i - 1], a[i]);
            int mx = max(a[i], a[i - 1]);
            while (mn * 2 < mx)
                mn *= 2, cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}