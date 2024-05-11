#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct Node {
    ll sm, sm2;
    Node() {
        sm = 0, sm2 = 0;
    }
};

int sz;
struct SegTree {
    vector <Node> seg;
    vector <ll> lazy; // lazy[p] = the value v that I need to add to all the elements inside the block p

    SegTree(int n) {
        sz = n;
        seg.resize(4<<__lg(sz));
        lazy.assign(4<<__lg(sz), 0);
    }

    Node merge(Node &L, Node &R) {
        Node comb;
        comb.sm = L.sm+R.sm;
        comb.sm2 = L.sm2+R.sm2;
        return comb;
    }

    void propagate(int st, int en, int p) {
        seg[p].sm2+=lazy[p]*lazy[p]*(en-st+1);
        seg[p].sm2+=2LL*lazy[p]*seg[p].sm;
        seg[p].sm+=lazy[p]*(en-st+1);
        if (st != en) {
            lazy[2*p]+=lazy[p];
            lazy[2*p+1]+=lazy[p];
        }
        lazy[p] = 0;
    }

    void upd(int l, int r, int val, int st = 1, int en = sz, int p = 1) {
        propagate(st, en, p);
        if (st >= l && en <= r) {
            lazy[p]+=val;
            return propagate(st, en, p);
        }
        if (st > r || en < l) return;
        int mi = (st+en)/2;
        upd(l, r, val, st, mi, p*2);
        upd(l, r, val, mi+1, en, p*2+1);
        seg[p] = merge(seg[2*p], seg[2*p+1]);
    }

    Node get(int l, int r, int st = 1, int en = sz, int p = 1) {
        propagate(st, en, p);
        if (st >= l && en <= r) return seg[p];
        if (st > r || en < l) return Node{};
        int mi = (st+en)/2;
        Node L = get(l, r, st, mi, p*2);
        Node R = get(l, r, mi+1, en, p*2+1);
        return merge(L, R);
    }
};

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        SegTree myseg(n);
        int q;
        cin >> q;
        while (q--) {
            int t;
            cin >> t;
            if (t == 0) {
                int l, r, val;
                cin >> l >> r >> val;
                myseg.upd(l, r, val);
            } else {
                int l, r;
                cin >> l >> r;
                cout << myseg.get(l, r).sm << '\n';
            }
        }
    }
    return 0;
}
