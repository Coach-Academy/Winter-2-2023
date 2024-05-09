#include <bits/stdc++.h>

using namespace std;
#define int long long
#define item int

struct SegTree {
#define md ((lx+rx) >> 1)
#define LF (x*2+1)
#define RT (x*2+2)
  vector<item> seg;
  item ign;
  int n;

  SegTree(const vector<int> &arr) : seg(4 * arr.size()), n(arr.size()) {
    build(arr, 0, 0, n - 1);
  }

  item mrg(const item &lf, const item &rt) {
    return gcd(lf, rt);
  }

  void update(int i, int val, int x = 0, int lx = 0, int rx = -1) {
    if (rx == -1)rx = n - 1;
    if (lx == rx) {
      seg[x] = val;
      return;
    }
    if (i <= md) {
      update(i, val, LF, lx, md);
    } else {
      update(i, val, RT, md + 1, rx);
    }
    seg[x] = mrg(seg[LF], seg[RT]);
  }

  int cnt;

  void query(int l, int r, int v, int x = 0, int lx = 0, int rx = -1) {
    if (rx == -1) rx = n - 1, cnt = 0;
    if (r < lx or rx < l or cnt > 1)return;
    if (l <= lx && rx <= r) {
      if (seg[x] % v == 0) {
        return;
      } else if (rx == lx) {
        ++cnt;
        return;
      }
    }
    query(l, r, v, LF, lx, md);
    query(l, r, v, RT, md + 1, rx);
  }

  void build(const vector<int> &arr, int x, int lx, int rx) {
    if (lx == rx) {
      seg[x] = arr[lx];
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
  for (int &x: arr) {
    cin >> x;
  }
  SegTree seg(arr);
  int q;
  cin >> q;
  int l, r, i, x, y, t;
  while (q--) {
    cin >> t;
    if (t == 1) {
      cin >> l >> r >> x;
      seg.query(--l, --r, x);
      cout << (seg.cnt <= 1 ? "YES\n" : "NO\n");
    } else {
      cin >> i >> y;
      seg.update(--i, y);
    }
  }
}
