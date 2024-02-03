#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int  n,m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    int dif = INT_MAX;
    sort(a,a+m);
    for (int i = 0; i+n-1 < m; ++i) {
        int mn = a[i];
        int mx = a[i+n-1];
        dif = min( dif , mx - mn);
    }
    cout << dif << endl;

    return 0;
}