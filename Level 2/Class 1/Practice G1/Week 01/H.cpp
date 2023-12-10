#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int q, ch, k;
        cin >> q;
        stack<string> sk;
        string s;
        sk.push("");
        while (q--) {
            cin >> ch;
            if (ch == 1) {
                cin >> s;
                sk.push(sk.top() + s);
            } else if (ch == 2) {
                cin >> k;
                string temp = sk.top(), cur = "";
                for (int i = 0; i < temp.size() - k; i++) {
                    cur += temp[i];
                }
                sk.push(cur);
            } else if (ch == 3) {
                cin >> k;
                cout << sk.top()[k - 1] << '\n';
            } else {
                sk.pop();
            }
        }
    }
}