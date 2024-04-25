#include <bits/stdc++.h>

using namespace std;
#define int long long


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

  T query(int l, int r) const {
    if (r < l)return 2;
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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x: arr) {
      cin >> x;
    }
    vector<int> d;
    for (int i = 1; i < n; ++i) {
      d.emplace_back(abs(arr[i] - arr[i - 1]));
    }
    SparseTable<int> sp(d, [&](int x, int y) {
      return gcd(x, y);
    });
    int l = 0, r = 0, ans = 1;
    while (r < d.size()) {
      while (sp.query(l, r) == 1) {
        ++l;
      }
      ans = max(ans, r - l + 2);
      ++r;
    }
    cout << ans << '\n';
  }
}
