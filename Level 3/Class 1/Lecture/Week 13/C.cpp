#include <bits/stdc++.h>

using namespace std;

struct sparseTable{
    vector <int> sp[20];

    sparseTable(vector <int> &a) {
        int n = (int)a.size();
        for (auto &i : sp) i.resize(n);
        for (int i = 0; i < n; i++) {
            sp[0][i] = a[i];
        }
        for (int i = 1; i < 20; i++) {
            for (int j = 0; j+(1<<i)-1 < n; j++) {
                sp[i][j] = min(sp[i-1][j], sp[i-1][j+(1<<(i-1))]);
            }
        }
    }

    int get(int l, int r) {
        if (r < l) swap(l, r);
        int len = r-l+1;
        int lg = __lg(len);
        return min(sp[lg][l], sp[lg][r-(1<<lg)+1]);
    }

};

int main() {
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sparseTable sp(a);
    int ans = -2e9;
    if (k < 2) ans = sp.get(0, n-1);
    else if (k > 2) ans = *max_element(a.begin(), a.end());
    else {
        for (int i = 0; i+1 < n; i++) {
            ans = max(ans, max(sp.get(0, i), sp.get(i+1, n-1)));
        }
    }
    cout << ans << '\n';
    return 0;
}
