#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int q, ch, x;
        cin >> q;
        queue<int> qe;
        priority_queue<int> pq;
        while (q--) {
            cin >> ch;
            if (ch == 1) {
                cin >> x;
                qe.push(x);
            } else if (ch == 3) {
                while (!qe.empty()) {
                    pq.push(-qe.front());
                    qe.pop();
                }
            } else {
                if (pq.empty()) {
                    cout << qe.front() << "\n";
                    qe.pop();
                } else {
                    cout << -pq.top() << "\n";
                    pq.pop();
                }
            }
        }
    }
}