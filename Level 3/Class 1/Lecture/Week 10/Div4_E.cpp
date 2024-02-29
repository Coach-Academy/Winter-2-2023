#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        for (int lev = 0; ; lev++) {
            if (k > (n+1)/2) {
                k-=(n+1)/2;
                n/=2;
            }
            else {
                cout << ((2*k-1)<<lev) << '\n';
                break;
            }
        }
    }
    return 0;
}
