#include<bits/stdc++.h>

using namespace std;
#define int long long

struct node {
  unordered_map<char, int> ch;
  int frq = 0;

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

  void update(string &s, int op) { /// +1 => push , -1 => erase
    int root = 0, lvl = 0;
    for (char c: s) {
      if (not trie[root][c]) {
        trie[root][c] = newNode();
      }
      root = trie[root][c];
      lvl++;
      if (op < 0)
        mp[{trie[root].frq, lvl}]--;
      trie[root].frq += op;
      if (op > 0)
        mp[{trie[root].frq, lvl}]++;

    }
  }

};

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  vector<string> arr(q);
  Trie trie;
  int ty, x;
  for (string &s: arr) {
    cin >> ty;
    if (ty == 1) {
      cin >> s;
      reverse(s.begin(), s.end());
      trie.update(s, +1);
    } else if (ty == 2) {
      int k, l;
      cin >> k >> l;
      cout << (mp[{k, l}] > 0 ? "YES\n" : "NO\n");
    } else {
      cin >> x, --x;
      if (arr[x].empty())continue;
      trie.update(arr[x], -1);
      arr[x] = "";
    }
  }

}
