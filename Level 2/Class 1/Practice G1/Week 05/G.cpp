#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // 0
        while (!s.empty() && s.back() == '0') {
            s.pop_back();
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    }
}