#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2;
        } else {
            cout << -(n + 1) / 2;
        }
    }
}