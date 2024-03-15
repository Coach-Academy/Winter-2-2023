#include <bits/stdc++.h>

using namespace std;

vector <int> piFunction(string &s) {
    int n = (int)s.size();
    vector <int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while(j > 0 && s[i] != s[j]) j = pi[j-1];
        pi[i] = j+(s[i] == s[j]);
    }
    return pi;
}

vector <int> KMP(string &s, string &pat) {
    int n = (int)s.size();
    int m = (int)pat.size();
    auto pi = piFunction(pat);
    vector <int> res;
    int p1 = 0, p2 = 0;
    while(p1 < n) {
        if (s[p1] == pat[p2]) {
            p1++, p2++;
            if (p2 == m) {
                res.push_back(p1-m);
                p2 = pi[p2-1];
            }
        }
        else {
            if (p2 == 0) p1++;
            else p2 = pi[p2];
        }
    }
    return res;
}

int main() {
    string s, pat; cin >> s >> pat;
    auto res = KMP(s, pat);
    for (auto &i : res) cout << i+1 << ' ';
    cout << '\n';
    return 0;
}
