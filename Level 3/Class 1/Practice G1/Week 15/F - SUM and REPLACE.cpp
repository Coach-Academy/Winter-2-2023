#include <bits/stdc++.h>

using namespace std;
#define int long long

//struct item {
//  int sum, pref, ans, suf;
//
//  item(int sum, int pref, int ans, int suf) : sum(sum), pref(pref), suf(suf), ans(ans) {}
//
//  item(int val) {
//    sum = suf = ans = pref = val;
//  }
//
//  item() {}
//};
#define item int

struct SegTree {
#define md ((lx+rx) >> 1)
#define LF (x*2+1)
#define RT (x*2+2)
  vector<item> seg;
  item ign;
  int n;

  SegTree(const vector<int> &arr) : seg(4 * arr.size()), n(arr.size()) {
    ign = 0;
    build(arr, 0, 0, n - 1);
  }

  item mrg(const item &lf, const item &rt) {
    return lf + rt;
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

const int N = 1e6 + 5;
int d[N];


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  for (int i = 1; i < N; ++i) {
    for (int j = i; j < N; j += i) {
      d[j]++;
    }
  }
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  set<int> updates;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] > 2) {
      updates.emplace(i);
    }
  }
  SegTree seg(arr);
  int ty;
  int l, r;
  while (q--) {
    cin >> ty >> l >> r, --l, --r;
    if (ty == 1) {
      auto it = updates.lower_bound(l);
      vector<int> a;
      for (; it != updates.end() && *it <= r; ++it) {
        a.emplace_back(*it);
      }
      for (int &x: a) {
        arr[x] = d[arr[x]];
        if (arr[x] <= 2) {
          updates.erase(x);
        }
        seg.update(x, arr[x]);
      }
    } else {
      cout << seg.query(l, r) << '\n';
    }
  }


}
