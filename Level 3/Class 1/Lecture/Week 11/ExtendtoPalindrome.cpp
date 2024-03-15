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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s;
    while(cin >> s) {
        auto rs = s;
        reverse(rs.begin(), rs.end());
        auto txt = rs+"#"+s;
        auto pi = piFunction(txt);
        cout << s;
        for (int i = (int)s.size()-pi.back()-1; ~i; i--) cout << s[i];
        cout << '\n';
    }
    return 0;
}
