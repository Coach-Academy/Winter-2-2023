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
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &x: arr) {
    cin >> x;
  }
  SparseTable<int> sp(arr, [&](int x, int y) {
    return gcd(x, y);
  });
  map<int, int> mp;

  for (int l = 0; l < n; ++l) {
    int g = 0, id = l;
    do {
      g = gcd(g, arr[id]);
      int s = id, e = n - 1, md, ans;
      while (s <= e) {
        md = (s + e) >> 1;
        if (sp.query(l, md) == g) {
          ans = md, s = md + 1;
        } else {
          e = md - 1;
        }
      }
      mp[g] += ans - id + 1;
      id = ans + 1;
    } while (id < n);
  }
  int q, x;
  cin >> q;
  while (q--){
    cin >> x;
    cout << mp[x] << '\n';
  }
}
