#include <bits/stdc++.h>

using namespace std;

const int B = 101, mod = 1e9+7;

int H(string s) {
    int pw = 1, h = 0;
    for (auto &i : s) {
        h+=1LL*(i-'a'+1)*pw%mod;
        if (h >= mod) h-=mod;
        pw = 1LL*pw*B%mod;
    }
    return h;
}

int main() {
    cout << H("hadsfadf") << ' ' << H("asdfa") << ' ' << H("hadsfadf");
    return 0;
}
