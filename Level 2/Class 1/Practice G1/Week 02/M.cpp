#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int q, ch, x, cnt = 1, last = 1;
        cin >> q;
        map<int, int> vis;
        priority_queue<pair<int, int>> pq;
        while (q--) {
            cin >> ch;
            if (ch == 1) {
                cin >> x;
                pq.push({x, -cnt});
                cnt++;
            } else if (ch == 2) {
                for (int i = last;; i++) {
                    if (vis[i] == 0) {
                        vis[i] = 1;
                        cout << i << ' ';
                        last = i + 1;
                        break;
                    }
                }
            } else {
                while (vis[-pq.top().second] == 1)pq.pop();
                //
                vis[-pq.top().second] = 1;
                cout << -pq.top().second << ' ';
                pq.pop();
            }
        }
    }
}