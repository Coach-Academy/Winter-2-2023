#include <bits/stdc++.h>

using namespace std;

int n;
string s;
vector <vector <int>> dp;
int go(int l = 0, int r = n-1) {
    if (r <= l) return 0;
    auto &ret = dp[l][r];
    if (~ret) return ret;
    if (s[l] == s[r]) return ret = go(l+1, r-1);
    return ret = min(go(l+1, r), go(l, r-1))+1;
}

string bld(int l = 0, int r = n-1) {
    if (r == l) return s.substr(l, 1);
    if (r < l) return "";
    if (s[l] == s[r]) return s[l]+bld(l+1, r-1)+s[r];
    int opt = go(l, r);
    if (opt == 1+go(l+1, r)) return s[l]+bld(l+1, r)+s[l];
    else return s[r]+bld(l, r-1)+s[r];
}

int main() {
    while(cin >> s) {
        n = (int)s.size();
        dp.assign(n, vector <int> (n, -1));
        cout << go() << ' ' << bld() << '\n';
    }
    return 0;
}
