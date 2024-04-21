#include<bits/stdc++.h>

using namespace std;
#define int long long

struct node {
  unordered_map<char, int> ch;
  bool is_end = false;

  int &operator[](char x) {
    return ch[x];
  }

};

struct Trie {
  vector<node> trie;

  int newNode() {
    trie.emplace_back();
    return trie.size() - 1;
  }

  Trie() {
    trie.clear();
    newNode();
  }

  bool insert(char ch, int &u) {
    bool newNd = false;
    if (not trie[u][ch]) {
      newNd = true;
      trie[u][ch] = newNode();
    }
    u = trie[u][ch];
    if (not trie[u].is_end) {
      newNd = true;
    }
    trie[u].is_end = true;
    return newNd;
  }

};

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s, good;
  int k;
  cin >> s >> good >> k;
  const int n = s.size();
  int res = 0;
  Trie trie;
  for (int i = 0; i < n; ++i) {
    int u = 0, cnt = 0;
    for (int j = i; j < n; ++j) {
      cnt += good[s[j] - 'a'] == '0';
      if (cnt > k)break;
      if (trie.insert(s[j], u))
        ++res;
    }
  }
  cout << res;
}
