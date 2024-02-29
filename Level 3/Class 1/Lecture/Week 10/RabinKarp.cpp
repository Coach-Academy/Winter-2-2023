#include <bits/stdc++.h>

using namespace std;

const int B = 101, mod = 1e9+7;

int mpow(int a, int b, int m) {
    int res = 1;
    while(b) {
        if (b&1) res = 1LL*res*a%m;
        a = 1LL*a*a%m, b/=2;
    }
    return res;
}

int main() {
    int invB = mpow(B, mod-2, mod);
    string s, p; cin >> s >> p;
    int n = (int)s.size(), m = (int)p.size();
    vector <int> pw(m, 1); // pw[i] = B^i
    for (int i = 1; i < m; i++) {
        pw[i] = 1LL*pw[i-1]*B%mod;
    }

    int h = 0;
    for (int i = 0; i < m; i++) {
        h+=1LL*(p[i]-'a'+1)*pw[i]%mod;
        if (h >= mod) h-=mod;
    }

    int hsh = 0;
    for (int i = 0; i < min(n, m); i++) {
        hsh+=1LL*(s[i]-'a'+1)*pw[i]%mod;
        if (hsh >= mod) hsh-=mod;
    }

    vector <int> ans;
    for (int i = 0; ; i++) {
        if (hsh == h) ans.push_back(i);
        if (i+m == n) break;
        hsh-=s[i]-'a'+1;
        if (hsh < 0) hsh+=mod;
        hsh = 1LL*hsh*invB%mod;
        hsh+=1LL*(s[i+m]-'a'+1)*pw[m-1]%mod;
        if (hsh >= mod) hsh-=mod;
    }

    for (auto &i : ans) cout << i << ' ';
    return 0;
}
