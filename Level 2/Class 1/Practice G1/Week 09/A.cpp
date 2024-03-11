#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        //
        // 0110
        // 1100
        // 1010  res
        int a, b;
        cin >> a >> b;
        cout << (a ^ b) << '\n';
    }
}