#include <bits/stdc++.h>

using namespace std;
#define int long long
#define pii pair<int,int>

template<typename T, class CMP = function<T(const T &, const T &)>>
class SparseTable {
public:
  int n;
  vector<vector<T>> sp;
  CMP func;

  SparseTable(const vector<T> &a, const CMP &f) : func(f) {
    n = a.size();
    int max_log = 32 - __builtin_clz(n);
    sp.resize(max_log);
    sp[0] = a;
    for (int j = 1; j < max_log; ++j) {
      sp[j].resize(n - (1 << j) + 1);
      for (int i = 0; i + (1 << j) <= n; ++i) {
        sp[j][i] = func(
            sp[j - 1][i],
            sp[j - 1][i + (1 << (j - 1))]
        );
      }
    }
  }

  int query(int l, int r) const {
    int sz = r - l + 1;
    pii cur{};
    for (int i = 0; sz; ++i, sz >>= 1) {
      if (sz & 1) {
        cur = func(cur, sp[i][l]);
        l += 1 << i;
      }
    }
    return cur.second;
  }

};


int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<pii > arr(n);
  for (auto &[x, f]: arr) {
    cin >> x, f = 1;
  }
  SparseTable<pii > sp(arr, [&](pii x, pii y) {
    /// .first -> g , .second frq[g]
    int g = gcd(x.first, y.first);
    int frq = 0;
    if (g == x.first) frq += x.second;
    if (g == y.first) frq += y.second;
    return make_pair(g, frq);
  });
  int q, l, r;
  cin >> q;
  while (q--) {
    cin >> l >> r;
    int sz = r - l + 1;
    cout << sz - sp.query(--l, --r) << '\n';
  }

}
