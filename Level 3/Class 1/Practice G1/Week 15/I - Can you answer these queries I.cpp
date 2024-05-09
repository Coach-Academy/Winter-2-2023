#include <bits/stdc++.h>

using namespace std;
#define int long long

struct item {
  int sum, pref, ans, suf;

  item(int sum, int pref, int ans, int suf) : sum(sum), pref(pref), suf(suf), ans(ans) {}

  item(int val) {
    sum = suf = ans = pref = val;
  }

  item() {}
};

const int inf = 1e10;

struct SegTree {
#define md ((lx+rx) >> 1)
#define LF (x*2+1)
#define RT (x*2+2)
  vector<item> seg;
  item ign;
  int n;

  SegTree(const vector<int> &arr) : seg(4 * arr.size()), n(arr.size()) {
    ign = item(0, 0, -inf, 0);
    build(arr, 0, 0, n - 1);
  }

  item mrg(const item &lf, const item &rt) {
    if (lf.ans == -inf)return rt;
    if (rt.ans == -inf)return lf;
    item res{};
    res.sum = lf.sum + rt.sum;
    res.pref = max(
        lf.pref,
        lf.sum + rt.pref
    );
    res.suf = max(
        rt.suf,
        rt.sum + lf.suf
    );
    res.ans = max({
                      lf.ans,
                      rt.ans,
                      lf.suf + rt.pref
                  });
    return res;
  }

  void update(int i, int val, int x = 0, int lx = 0, int rx = -1) {
    if (rx == -1)rx = n - 1;
    if (lx == rx) {
      seg[x] = item(val);
      return;
    }
    if (i <= md) {
      update(i, val, LF, lx, md);
    } else {
      update(i, val, RT, md + 1, rx);
    }
    seg[x] = mrg(seg[LF], seg[RT]);
  }

  item query(int l, int r, int x = 0, int lx = 0, int rx = -1) {
    if (rx == -1)rx = n - 1;
    if (l <= lx and rx <= r) {
      return seg[x];
    }
    if (r < lx or rx < l) {
      return ign;
    }
    return mrg(
        query(l, r, LF, lx, md),
        query(l, r, RT, md + 1, rx)
    );
  }

  void build(const vector<int> &arr, int x, int lx, int rx) {
    if (lx == rx) {
      seg[x] = item(arr[lx]);
      return;
    }
    build(arr, LF, lx, md);
    build(arr, RT, md + 1, rx);
    seg[x] = mrg(seg[LF], seg[RT]);
  }

#undef md
#undef LF
#undef RT
};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &x: arr) cin >> x;
  SegTree seg(arr);
  int q;
  cin >> q;
  int l, r;
  while (q--) {
    cin >> l >> r;
    auto res = seg.query(--l, --r);
    cout << res.ans << '\n';
  }
}
