#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,m,q;
    cin >> n >> m >> q;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll l[m] ,r[m],d[m];
    for (int i = 0; i < m; ++i) {
        cin >> l[i] >> r[i] >> d[i];
        l[i] -- ;
        r[i] -- ;
    }
    vector<int> f(m+1 ,0);
    for (int i = 0; i < q; ++i) {
        int x,y;
        cin >> x >> y;
        x--,y--;
        f[x]++;
        f[y+1]--;
    }
    vector<ll> pa(n+1,0);
    for (int i = 0; i < m; ++i) {
        if ( i)
            f[i] += f[i-1];

        d[i] *= f[i];

        pa [ l[i] ]+= d[i];
        pa [ r[i] +1 ] -= d[i];
    }

    for (int i = 0; i < n; ++i) {

        if ( i)
            pa[i] += pa[i-1];

        cout << a[i]+pa[i] << " " ;
    }
    cout << endl;
    return 0;

}