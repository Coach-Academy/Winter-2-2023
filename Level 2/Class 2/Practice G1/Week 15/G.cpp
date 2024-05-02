#include<bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

const int N = 2e6+7, mod= 1e9 + 7;

int mul(int a, int b) {
    return (1LL * a * b) % mod;
}

int add(int a, int b) {
    a = (a + mod) % mod;
    b = (b + mod) % mod;
    return (a + b) % mod;
}

int fp(int b, int p) {
    if (b == 1 or p == 0)
        return 1;

    int ret = fp(b, p >> 1);
    ret = mul(ret, ret);

    if (p & 1)
        ret = mul(ret, b);

    return ret;
}
ll fact[N], inv[N];
void pre() {
    fact[0] = inv[0] = 1;
    for (ll i = 1; i < N; i++)
        fact[i] = (fact[i - 1] * i) % mod, inv[i] = fp(fact[i], mod - 2);
}

void doWork() {
    int n;
    cin >> n;
    cout << add(fact[n] ,- fp(2,n-1)) << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    pre();
    int t = 1;
    //cin >> t;
    while (t--) {
        doWork();
    }
    return 0;
}