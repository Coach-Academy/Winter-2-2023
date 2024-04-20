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
        int len = r-l+1;
        int lg = __lg(len);
        return min(sp[lg][l], sp[lg][r-(1<<lg)+1]);
    }

};

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sparseTable sp(a);
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        cout << sp.get(l, r) << '\n';
    }
    return 0;
}
