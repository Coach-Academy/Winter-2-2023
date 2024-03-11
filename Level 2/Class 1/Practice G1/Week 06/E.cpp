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
        int idx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                idx = i;
                break;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (idx != i)cout << s[i];
        }
    }
}