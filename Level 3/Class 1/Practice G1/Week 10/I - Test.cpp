#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod1 = 1e9 + 9, mod2 = 2e9 + 11;
const ll B1 = 131, B2 = 157;
const int N = 1e5 + 5;
pair<int, int> pw[N];

struct HASH {
  vector<pair<int, int>> pref;
  int n;

  HASH(const string &s) {
    n = s.size();
    pref.resize(s.size() + 1);
    int h1 = 0, h2 = 0;
    for (int i = 0; i < s.size(); ++i) {
      h1 = h1 * B1 % mod1;
      h2 = h2 * B2 % mod2;
      h1 = (h1 + s[i]) % mod1;
      h2 = (h2 + s[i]) % mod2;
      pref[i] = {h1, h2};
    }
  }

  pair<int, int> range(int l, int r) {
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

};

void pre() {
  pw[0] = {1, 1};
  for (int i = 1; i < N; ++i) {
    pw[i].first = pw[i - 1].first * B1 % mod1;
    pw[i].second = pw[i - 1].second * B2 % mod2;
  }
}

bool isSubstring(HASH &s, HASH &p) {
  if (p.n > s.n) {
    return false;
  }
  int n = s.n, m = p.n;
  auto h = p.range(0, m - 1);
  for (int i = 0; i + m - 1 < n; ++i) {
    if (s.range(i, i + m - 1) == h) {
      return true;
    }
  }
  return false;
}

int match(HASH &f, HASH &s) {
  int n = f.n, m = s.n;
  int sz = min(n, m);
  for (int i = sz; i > 0; --i) {
    auto suf = f.range(n - i, n - 1);
    auto pref = s.range(0, i - 1);
    if (suf == pref) {
      return i;
    }
  }
  return 0;
}

int solve(
    string &a, HASH &s1,
    string &b, HASH &s2,
    string &c, HASH &s3
) {
  int sz1 = match(s1, s2);
  string s = a;
  for (int i = sz1; i < s2.n; ++i) {
    s += b[i];
  }
  HASH sh(s);
  int sz2 = match(sh, s3);
  return s.size() + c.size() - sz2;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  pre();
  string a[3];
  vector<HASH> h;
  for (auto &s: a) {
    cin >> s;
    h.emplace_back(s);
  }

  if (isSubstring(h[1], h[0]) or isSubstring(h[2], h[0])) {
    a[0] = "", h[0] = HASH("");
  }
  if (isSubstring(h[0], h[1]) or isSubstring(h[2], h[1])) {
    a[1] = "", h[1] = HASH("");
  }
  if (isSubstring(h[0], h[2]) or isSubstring(h[1], h[2])) {
    a[2] = "", h[2] = HASH("");
  }

  int p[] = {0, 1, 2};
  int ans = a[0].size() + a[1].size() + a[2].size();
  do {
    int cur = solve(
        a[p[0]], h[p[0]],
        a[p[1]], h[p[1]],
        a[p[2]], h[p[2]]
    );
    ans = min(ans, cur);
  } while (next_permutation(p, p + 3));
  cout << ans;
}
