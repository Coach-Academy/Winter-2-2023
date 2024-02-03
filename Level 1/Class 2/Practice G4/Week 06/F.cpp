#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int mn = a[0];
    int mx = a[0];
    int cnt =0;
    for (int i = 1; i < n; ++i) {
        if ( a[i] > mx)
            cnt++, mx = a[i];
        if ( a[i] < mn)
            cnt++, mn = a[i];
    }
    cout << cnt << endl;
    return 0;
}