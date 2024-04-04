#include <bits/stdc++.h>

using namespace std;


vector<int> kmp(const string &s) {
  int n = s.size();
  vector<int> ph(n);
  for (int i = 1, k = 0; i < s.size(); ++i) {
    while (k > 0 && s[k] != s[i]) {
      k = ph[k - 1];
    }
    if (s[i] == s[k]) ++k;
    ph[i] = k;
  }
  return ph;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    string s, pat;
    cin >> s >> pat;
    int m = pat.size();
    vector<int> ph = kmp(pat + "#" + s);
    vector<int> res;
    for (int i = m + 1; i < ph.size(); ++i) {
      if (ph[i] == m) {
        res.emplace_back(i - 2 * m + 1);
      }
    }
    if (res.empty()) {
      cout << "Not Found\n\n";
    } else {
      cout << res.size() << '\n';
      for (int &x: res) {
        cout << x << ' ';
      }
      cout << "\n\n";
    }
  }


}
