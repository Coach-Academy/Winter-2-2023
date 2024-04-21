#include<bits/stdc++.h>

using namespace std;
#define int long long

struct node {
  unordered_map<char, int> ch;
  int frq_end = 0;

  char max_char = '#';
  int max_freq = 0;

  int &operator[](char x) {
    return ch[x];
  }

};

map<pair<int, int>, int> mp;

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

  void update(string &s, int root = 0, int i = 0) {
    if (i == s.size()) {
      trie[root].frq_end++;
      if (trie[root].max_freq <= trie[root].frq_end) {
        trie[root].max_char = '#';
        trie[root].max_freq = trie[root].frq_end;
      }
      return;
    }
    char ch = s[i];
    if (not trie[root][ch]) {
      trie[root][ch] = newNode();
    }
    int v = trie[root][ch];
    update(s, v, i + 1);
    if (trie[v].max_freq > trie[root].max_freq) {
      trie[root].max_freq = trie[v].max_freq;
      trie[root].max_char = ch;
    } else if (trie[v].max_freq == trie[root].max_freq) {
      trie[root].max_char = min(ch, trie[root].max_char);
    }
  }

  void query(string &s) {
    int u = 0;
    for (char c: s) {
      if (not trie[u][c]) {
        cout << "-1\n";
        return;
      }
      u = trie[u][c];
    }
    cout << s;
    while (trie[u].max_char != '#') {
      char c = trie[u].max_char;
      cout << c;
      u = trie[u][c];
    }
    cout << " " << trie[u].frq_end << '\n';
  }

};

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  Trie trie;
  string s;
  while (n--) {
    cin >> s;
    trie.update(s);
  }
  int q;
  cin >> q;
  while (q--) {
    cin >> s;
    trie.query(s);
  }
}
