#include <bits/stdc++.h>

using namespace std;

struct Trie {
    Trie* children[26];
    int mnIdx;
    bool endOfWord;

    Trie() {
        mnIdx = 2e9;
        endOfWord = false;
        memset(children, 0, sizeof children);
    }

    void add(string &s, int idx, int cur = 0) {
        if (cur == s.size()) {
            endOfWord = true;
            return;
        }
        int c = s[cur]-'a';
        mnIdx = min(mnIdx, idx);
        if (!children[c]) children[c] = new Trie();
        children[c]->add(s, cur+1);
    }

    int get(string &s, int cur = 0) {
        if (cur == s.size()) return mnIdx;
        int c = s[cur]-'a';
        if (!children[c]) return -1;
        return children[c]->get(s, cur+1);
    }
};

int main() {
    Trie tri;
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        string s; cin >> s;
        tri.add(s, i);
    }
    int q; cin >> q;
    while(q--) {
        string s; cin >> s;
        cout << tri.get(s) << '\n';
    }
    return 0;
}
