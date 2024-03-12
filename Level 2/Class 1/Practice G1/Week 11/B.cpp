#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num, odd = 0;
        for (int i = 0; i < n * 2; i++) {
            cin >> num;
            odd += (num & 1);
        }
        if (odd == n)cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
}