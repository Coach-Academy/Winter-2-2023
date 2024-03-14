#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod1 = 1e9 + 9, mod2 = 2e9 + 11;
const ll B1 = 131, B2 = 157;
const int N = 1e3 + 5;
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

string removerSpaces(string &line) {
  string cur;
  for (char &ch: line) {
    if (isalpha(ch))
      cur += ch;
  }
  return cur;
}

int solve(int sz, HASH &h) {
  map<pair<int, int>, int> mp;
  int mx = 0;
  for (int i = 0; i + sz <= h.n; ++i) {
    auto cur = h.PrefixRange(i, i + sz - 1);
    mx = max(++mp[cur], mx);
  }
  return mx;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
//  freopen("output.txt", "w", stdout);
  pre();
  string line;
  while (getline(cin, line) and line.size()) {
    string s = removerSpaces(line);
    HASH h(s);
    for (int i = 1; i < s.size(); ++i) {
      int res = solve(i, h);
      if (res == 1)break;
      cout << res << '\n';
    }
    cout << '\n';
  }
}
