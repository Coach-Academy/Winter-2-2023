#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int B1 = 101, B2 = 131, mod1 = 1e9+7, mod2 = 998244353;

int mpow(int a, int b, int m) {
    int res = 1;
    while(b) {
        if (b&1) res = 1LL*res*a%m;
        a = 1LL*a*a%m, b/=2;
    }
    return res;
}

int main() {
    string s; cin >> s;
    int n = (int)s.size();
    vector <int> pw1(n, 1);
    vector <int> pw2(n, 1);
    for (int i = 1; i < n; i++) {
        pw1[i] = 1LL*pw1[i-1]*B1%mod1;
        pw2[i] = 1LL*pw2[i-1]*B2%mod2;
    }

    bool bad[26]{};
    for (int i = 0; i < 26; i++) {
        char c; cin >> c;
        if (c == '0') bad[i] = true;
    }
    set <pair<int, int>> st;
    int k; cin >> k;
    for (int l = 0; l < n; l++) {
        int hsh1 = 0, hsh2 = 0, cnt = 0;
        for (int r = l; r < n; r++) {
            hsh1+=1LL*(s[r]-'a'+1)*pw1[r-l]%mod1;
            hsh2+=1LL*(s[r]-'a'+1)*pw2[r-l]%mod2;
            if (hsh1 >= mod1) hsh1-=mod1;
            if (hsh2 >= mod2) hsh2-=mod2;
            if (bad[s[r]-'a']) cnt++;
            if (cnt <= k) st.insert({hsh1, hsh2});
        }
    }
    cout << st.size() << '\n';
    return 0;
}
