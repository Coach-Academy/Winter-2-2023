#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9+7;

struct Matrix
{
    vector <vector <int>> mat;
    int mod;
    Matrix(int sz, int init, int m)
    {
        mod = m;
        mat.resize(sz, vector <int> (sz, init));
    }
    Matrix operator * (Matrix &oth)
    {
        int sz = mat.size();
        Matrix res(sz, 0, mod);
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                for (int k = 0; k < sz; k++) {
                    res.mat[i][j] += 1LL*mat[i][k]*oth.mat[k][j]%mod;
                    res.mat[i][j]%=mod;
                }
            }
        }
        return res;
    }

    void operator *= (Matrix &oth)
    {
        *this = *this*oth;
    }
};

Matrix mpow(Matrix a, ll b)
{
    Matrix res((int)a.mat.size(), 0, mod);
    for (int i = 0; i < a.mat.size(); i++) res.mat[i][i] = 1;
    while(b) {
        if (b&1) res*=a;
        a*=a, b/=2;
    }
    return res;
}

int main() {
    int n, m, k; cin >> n >> m >> k;
    Matrix tr(n, 0, mod);
    while(m--) {
        int u, v; cin >> u >> v; u--, v--;
        tr.mat[v][u] = 1;
    }
    tr = mpow(tr, k);
    int ans = 0;
    for (auto &i : tr.mat) {
        for (auto &j : i) {
            ans+=j;
            if (ans >= mod) ans-=mod;
        }
    }
    cout << ans << '\n';
    return 0;
}