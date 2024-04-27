#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;

    vector <int> T(n+1, 0);
    auto add = [&](int idx, int val) {
        while(idx <= n) {
            T[idx]+=val;
            idx+=idx&-idx;
        }
    };

    auto get = [&](int idx) {
        int res = 0;
        while(idx) {
            res+=T[idx];
            idx-=idx&-idx;
        }
        return res;
    };

    auto sum = [&](int l, int r) {
        return get(r)-get(l-1);
    };

    for (int i = 0; i < n; i++) {
        add(i+1, a[i]);
    }

    int q; cin >> q;
    while(q--) {
        int t; cin >> t;
        if (t == 1) {
            int l, r; cin >> l >> r;
            cout << sum(l, r) << '\n';
        }
        else {
            int idx, val; cin >> idx >> val;
            add(idx, val);
        }
    }
    return 0;
}
