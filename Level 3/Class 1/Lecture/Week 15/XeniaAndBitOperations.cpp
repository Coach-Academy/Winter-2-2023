#include <bits/stdc++.h>

using namespace std;

int sz;
struct SegTree {
    int turn = 1;
    vector <int> seg;

    SegTree(int n) {
        sz = n;
        seg.assign(4<<__lg(sz), 2e9);
    }

    void upd(int idx, int val, int st = 1, int en = sz, int p = 1) {
        if (st == en) return void (seg[p] = val);
        int mi = (st+en)/2;
        if (idx <= mi) upd(idx, val, st, mi, p*2);
        else upd(idx, val, mi+1, en, p*2+1);
        if (turn) seg[p] = seg[2*p]|seg[2*p+1];
        else seg[p] = seg[2*p]^seg[2*p+1];
        turn^=1;
    }

    int get(int l, int r, int st = 1, int en = sz, int p = 1) {
        if (st >= l && en <= r) return seg[p];
        if (st > r || en < l) return 2e9;
        int mi = (st+en)/2;
        int L = get(l, r, st, mi, p*2);
        int R = get(l, r, mi+1, en, p*2+1);
        return min(L, R);
    }
};

int main() {
    int n, q; cin >> n >> q;
    n = 1<<n;
    SegTree myseg(n);
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        myseg.upd(i, x);
    }
    while(q--) {
        int idx, val; cin >> idx >> val;
        myseg.upd(idx, val);
        cout << myseg.seg[1] << '\n';
    }
    return 0;
}
