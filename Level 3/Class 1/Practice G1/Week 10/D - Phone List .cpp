#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod1 = 1e9 + 9, mod2 = 2e9 + 11;
const ll B1 = 131, B2 = 157;
const int N = 15;
pair<int, int> pw[N];

struct HASH {
  vector<pair<int, int>> pref;
  vector<pair<int, int>> suf;
  int n;

  HASH(const string &s) {
    n = s.size();
    pref.resize(s.size() + 1);
    suf.resize(s.size() + 1);
    int h1 = 0, h2 = 0;
    for (int i = 0; i < s.size(); ++i) {
      h1 = h1 * B1 % mod1;
      h2 = h2 * B2 % mod2;
      h1 = (h1 + s[i]) % mod1;
      h2 = (h2 + s[i]) % mod2;
      pref[i] = {h1, h2};
    }
    h1 = 0, h2 = 0;
    for (int i = ((int) s.size()) - 1; i >= 0; --i) {
      h1 = h1 * B1 % mod1;
      h2 = h2 * B2 % mod2;
      h1 = (h1 + s[i]) % mod1;
      h2 = (h2 + s[i]) % mod2;
      suf[i] = {h1, h2};
    }
  }

  pair<int, int> PrefixRange(int l, int r) {
    auto res = pref[r];
    int sz = r - l + 1;
    --l;
    if (l >= 0) {
      res.first -= pw[sz].first * 1ll * pref[l].first % mod1;
      if (res.first < 0)res.first += mod1;

      res.second -= pw[sz].second * 1ll * pref[l].second % mod2;
      if (res.second < 0)res.second += mod2;
    }
    return res;
  }

  pair<int, int> SuffixRange(int l, int r) {
    auto res = suf[l];
    int sz = r - l + 1;
    ++r;
    if (r < n) {
      res.first -= pw[sz].first * 1ll * suf[r].first % mod1;
      if (res.first < 0)res.first += mod1;

      res.second -= pw[sz].second * 1ll * suf[r].second % mod2;
      if (res.second < 0)res.second += mod2;
    }
    return res;
  }

};

void pre() {
  pw[0] = {1, 1};
  for (int i = 1; i < N; ++i) {
    pw[i].first = pw[i - 1].first * B1 % mod1;
    pw[i].second = pw[i - 1].second * B2 % mod2;
  }
}

void solve() {
  int n;
  cin >> n;
  vector<HASH> h;
  string s;
  set<pair<int, int>> st;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    h.emplace_back(s);
    st.emplace(
        h.back().PrefixRange(0, s.size() - 1)
    );
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j + 1 < h[i].n; ++j) {
      auto cur = h[i].PrefixRange(0, j);
      if (st.count(cur)) {
        cout << "NO\n";
        return;
      }
    }
  }
  cout << "YES\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  pre();
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}
