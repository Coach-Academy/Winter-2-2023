#include <bits/stdc++.h>

using namespace std;
#define int long long
#define item int
int dep;

struct SegTree {
#define md ((lx+rx) >> 1)
#define LF (x*2+1)
#define RT (x*2+2)
  vector<item> seg;
  item ign;
  int n;

  SegTree(const vector<int> &arr) : seg(2 * arr.size()), n(arr.size()) {
    build(arr, 0, 0, n - 1);
  }

  item mrg(const item &lf, const item &rt, int lvl) {
    if (lvl & 1) return lf ^ rt;
    return lf | rt;
  }

  void update(int i, int val, int x = 0, int lx = 0, int rx = -1, int lvl = 1) {
    if (rx == -1)rx = n - 1;
    if (lx == rx) {
      seg[x] = val;
      return;
    }
    if (i <= md) {
      update(i, val, LF, lx, md, lvl + 1);
    } else {
      update(i, val, RT, md + 1, rx, lvl + 1);
    }
    seg[x] = mrg(seg[LF], seg[RT], dep - lvl);
  }

  void build(const vector<int> &arr, int x, int lx, int rx, int lvl = 1) {
    if (lx == rx) {
      seg[x] = arr[lx];
      return;
    }
    build(arr, LF, lx, md, lvl + 1);
    build(arr, RT, md + 1, rx, lvl + 1);
    seg[x] = mrg(seg[LF], seg[RT], dep - lvl);
  }

#undef md
#undef LF
#undef RT
};


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> dep >> q;
  vector<int> arr(1 << dep);
  for (int &x: arr) {
    cin >> x;
  }
  SegTree seg(arr);
  int i, x;
  while (q--) {
    cin >> i >> x;
    seg.update(--i, x);
    cout << seg.seg[0] << '\n';
  }
}
