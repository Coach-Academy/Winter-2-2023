#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, num, mx = 0;
        cin >> n;
        int fre[101] = {0};
        for (int i = 0; i < n; i++) {
            cin >> num;
            fre[num]++;
            mx = max(mx, fre[num]);
        }
        cout << n - mx;
    }
}