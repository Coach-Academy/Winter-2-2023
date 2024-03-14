#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod1 = 1e9 + 9, mod2 = 2e9 + 11;
const ll B1 = 131, B2 = 157;
const int N = 1e6 + 5;
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


bool check(int l1, int r1, int l2, int r2, HASH &h) {
  if (r1 - l1 != r2 - l2) {
    return false;
  }
  if (h.range(l1, r1) == h.range(l2, r2)) {
    return true;
  }
  int sz = r1 - l1 + 1;
  int s = 1, e = sz, ans{};
  while (s <= e) {
    int md = (s + e) / 2;
    if (h.range(l1, l1 + md - 1) == h.range(l2, l2 + md - 1)) {
      ans = md, s = md + 1;
    } else {
      e = md - 1;
    }
  }
  if (ans + 1 == sz) {
    return true;
  }
  if (h.range(l1 + ans + 1, r1) == h.range(l2 + ans + 1, r2)) {
    return true;
  } else {
    return false;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  pre();
  int n, q;
  string s;
  cin >> n >> s >> q;
  HASH h(s);
  int l1, r1, l2, r2;
  while (q--) {
    cin >> l1 >> r1 >> l2 >> r2;
    cout << (check(--l1, --r1, --l2, --r2, h) ? "SIMILAR\n" : "DIFFERENT\n");
  }
}
