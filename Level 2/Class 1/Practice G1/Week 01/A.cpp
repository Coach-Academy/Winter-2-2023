#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, num, d;
        cin >> n >> d;
        queue<int> qe;
        for (int i = 0; i < n; i++) {
            cin >> num;
            qe.push(num);
        }
        // 3 4 5 1 2
        while (d--) {
            qe.push(qe.front());
            qe.pop();
        }
        while (!qe.empty()) {
            cout << qe.front() << ' ';
            qe.pop();
        }
    }
}