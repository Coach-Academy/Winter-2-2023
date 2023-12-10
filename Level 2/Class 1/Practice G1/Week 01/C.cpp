#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        queue<int> sk;
        int q;
        cin>>q;
        while(q--) {
            int ch, num;
            cin >> ch;
            if (ch == 1) {
                cin >> num;
                sk.push(num);
            } else if (ch == 2) {
                if (!sk.empty())sk.pop();
            } else {
                if (sk.empty()) {
                    cout << "Empty!" << '\n';
                } else {
                    cout << sk.front() << '\n';
                }
            }
        }
    }
}