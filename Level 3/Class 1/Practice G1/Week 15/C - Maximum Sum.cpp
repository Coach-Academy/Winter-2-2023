#include <bits/stdc++.h>

using namespace std;
#define int long long

//struct item {
//  array<int, 3> val;
//};

#define item array<int, 2>

struct SegTree {
#define md ((lx+rx) >> 1)
#define LF (x*2+1)
#define RT (x*2+2)
  vector<item > seg;
  item ign;
  int n;

  SegTree(const vector<int> &arr) : seg(4 * arr.size()), n(arr.size()), ign({}) {
    build(arr, 0, 0, n - 1);
  }

  item mrg(const item &lf, const item &rt) {
    array<int, 4> tmp = {lf[0], lf[1], rt[0], rt[1]};
    sort(tmp.rbegin(), tmp.rend());
    item res = {tmp[0], tmp[1]};
    return res;
  }

  void update(int i, int val, int x = 0, int lx = 0, int rx = -1) {
    if (rx == -1)rx = n - 1;
    if (lx == rx) {
      seg[x] = {val, 0};
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
      seg[x] = {arr[lx], 0};
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
  char ty;
  int l, r, x;
  while (q--) {
    cin >> ty;
    if (ty == 'U') {
      cin >> l >> x;
      seg.update(--l, x);
    } else {
      cin >> l >> r;
      auto res = seg.query(--l, --r);
      cout << res[0] + res[1] << '\n';
    }
  }


}
