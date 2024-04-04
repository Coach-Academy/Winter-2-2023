#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string pat;
  int n;
  while (cin >> n >> pat, n > 0) {
    int m = pat.size();
    if (n < m) {
      cout << "0\n";
      continue;
    }
    vector<int> phi(m);
    for (int i = 1, k = 0; i < m; ++i) {
      while (k > 0 and pat[i] != pat[k]) {
        k = phi[k - 1];
      }
      if (pat[k] == pat[i]) {
        ++k;
      }
      phi[i] = k;
    }
    int res = 1 + (n - m) / (m - phi.back());
    cout << res << '\n';
  }


}
