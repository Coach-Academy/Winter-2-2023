#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if ( i)
            a[i] += a[i-1];
    }
    int idx = 0, sum =INT_MAX;
    for (int i = 0; i+k-1 <  n; ++i) {
        int l = i;
        int r = i+k-1;
        int newsum = a[r];
        if ( l > 0)
            newsum -= a[l-1];

        if ( sum  >  newsum) {
            sum = newsum;
            idx = i+1;
        }
    }
    cout << idx << endl;
    return 0;

}