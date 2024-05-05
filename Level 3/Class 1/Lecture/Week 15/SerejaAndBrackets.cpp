#include <bits/stdc++.h>

using namespace std;

struct Node {
    int complete, open, close;
    Node() {
        complete = open = close = 0;
    }
};

int sz;
struct SegTree {
    vector <Node> seg;

    SegTree(int n) {
        sz = n;
        seg.resize(4<<__lg(sz));
    }

    Node merge(Node L, Node R) {
        Node comb{};
        comb.complete = L.complete+R.complete;
        int mn = min(L.open, R.close);
        comb.complete+=mn;
        L.open-=mn, R.close-=mn;
        comb.open+=L.open+R.open;
        comb.close+=L.close+R.close;
        return comb;
    }

    void upd(int idx, int val, int st = 1, int en = sz, int p = 1) {
        if (st == en) {
            if (val) seg[p].open = 1;
            else seg[p].close = 1;
            return;
        }
        int mi = (st+en)/2;
        if (idx <= mi) upd(idx, val, st, mi, p*2);
        else upd(idx, val, mi+1, en, p*2+1);
        seg[p] = merge(seg[2*p], seg[2*p+1]);
    }

    Node get(int l, int r, int st = 1, int en = sz, int p = 1) {
        if (st >= l && en <= r) return seg[p];
        if (st > r || en < l) return Node{};
        int mi = (st+en)/2;
        auto L = get(l, r, st, mi, p*2);
        auto R = get(l, r, mi+1, en, p*2+1);
        return merge(L, R);
    }
};

int main() {
    string s; cin >> s;
    int n = (int)s.size();
    SegTree myseg(n);
    for (int i = 1; i <= n; i++) {
        myseg.upd(i, s[i-1] == '(');
    }
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        cout << myseg.get(l, r).complete*2 << '\n';
    }
    return 0;
}
