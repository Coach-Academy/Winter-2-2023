#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e6+10;
bool isPrime[N];
void pre() {
    for (int i = 2; i < N; i++) isPrime[i] = true;
    for (int i = 2; i*i < N; i++) {
        if (!isPrime[i]) continue;
        for (int j = i*i; j < N; j+=i) {
            isPrime[j] = false;
        }
    }
}

struct Node {
    int cnt;
    Node() {
        cnt = 0;
    }
};

int sz;
struct SegTree {
    vector <Node> seg;
    vector <ll> lazy; // lazy[p] = the value v that I need to change all the elements in the range of block p to it

    SegTree(int n) {
        sz = n;
        seg.resize(4<<__lg(sz));
        lazy.assign(4<<__lg(sz), 0);
    }

    Node merge(Node &L, Node &R) {
        Node comb;
        comb.cnt = L.cnt+R.cnt;
        return comb;
    }

    void propagate(int st, int en, int p) {
        if (lazy[p] == 0) return;
        seg[p].cnt = (isPrime[lazy[p]] ? en-st+1 : 0);
        if (st != en) {
            lazy[2*p] = lazy[p];
            lazy[2*p+1] = lazy[p];
        }
        lazy[p] = 0;
    }

    void upd(int l, int r, int val, int st = 1, int en = sz, int p = 1) {
        propagate(st, en, p);
        if (st >= l && en <= r) {
            lazy[p] = val;
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
    pre();

    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        cout << "Case " << tc << ":\n";
        int n, q; cin >> n >> q;
        SegTree myseg(n);
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            myseg.upd(i, i, x);
        }
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
                cout << myseg.get(l, r).cnt << '\n';
            }
        }
    }
    return 0;
}
