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

  T get(int l, int r) const {
    int lg = __lg(r - l + 1);
    return func(
        sp[lg][l],
        sp[lg][r - (1 << lg) + 1]
    );
  }

};

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> mon(n);
    for (int &x: mon) cin >> x;
    int m;
    cin >> m;
    vector<int> p(n + 1);
    for (int i = 0, s, x; i < m; ++i) {
      cin >> x >> s;
      p[s] = max(p[s], x);
    }
    for (int i = n - 1; ~i; --i) {
      p[i] = max(p[i], p[i + 1]);
    }

    SparseTable<int> sp(mon, [](int x, int y) { return max(x, y); });

    int i = 0, res{};
    while (i < n) {
      ++res;
      int s = 1, e = n - i, md, ans = -1;
      while (s <= e) {
        md = (e + s) >> 1;
        if (p[md] >= sp.get(i, i + md - 1)) {
          s = md + 1, ans = md;
        } else {
          e = md - 1;
        }
      }
      if (~ans) {
        i += ans;
      } else {
        res = -1;
        break;
      }
    }
    cout << res << '\n';
  }
}
