#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll B = 101, mod = 1e15+123457;

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
    vector <ll> pw(n, 1);
    for (int i = 1; i < n; i++) {
        pw[i] = 1LL*pw[i-1]*B%mod;
    }

    bool bad[26]{};
    for (int i = 0; i < 26; i++) {
        char c; cin >> c;
        if (c == '0') bad[i] = true;
    }
    set <ll> st;
    int k; cin >> k;
    for (int l = 0; l < n; l++) {
        ll hsh = 0;
        int cnt = 0;
        for (int r = l; r < n; r++) {
            hsh+=(s[r]-'a'+1)*pw[r-l]%mod;
            if (hsh >= mod) hsh-=mod;
            if (bad[s[r]-'a']) cnt++;
            if (cnt <= k) st.insert(hsh);
        }
    }
    cout << st.size() << '\n';
    return 0;
}
