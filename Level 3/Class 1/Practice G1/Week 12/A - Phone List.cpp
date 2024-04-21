#include<bits/stdc++.h>

using namespace std;
#define int long long

struct node {
  unordered_map<char, int> ch;
  int isEnd = 0;

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

  bool update(string &s, int op) { /// +1 => push , -1 => erase
    int root = 0;
    bool isEnd = false;
    bool newNde = false;
    for (char c: s) {
      if (not trie[root][c]) {
        trie[root][c] = newNode();
        newNde = true;
      }
      root = trie[root][c];
      if (trie[root].isEnd)
        isEnd = true;
    }
    trie[root].isEnd += op;

    return isEnd or !newNde;

  }


};

void solve() {
  int n;
  cin >> n;
  string s;
  Trie trie;
  bool isValid = true;
  for (int i = 0; i < n; ++i) {
    cin >> s;
    if (trie.update(s, +1)) {
      isValid = false;
    }
  }
  cout << (isValid ? "YES\n" : "NO\n");
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}
