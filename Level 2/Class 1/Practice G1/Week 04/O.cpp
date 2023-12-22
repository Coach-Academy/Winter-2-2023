#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = s.substr(0, n);
        string b = s.substr(n);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int gr = 1, sm = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] >= b[i]) {
                gr = 0;
            }
            if (b[i] >= a[i]) {
                sm = 0;
            }
        }
        if (sm + gr) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}