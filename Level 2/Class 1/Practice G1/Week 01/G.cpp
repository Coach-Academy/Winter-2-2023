#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        queue<pair<int, int>> qe;
        int n, num, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> num;
            qe.push({num, i});
        }
        while (qe.size() > 1) {
            pair<int, int> temp = qe.front();
            qe.pop();
            temp.first -= m;
            if (temp.first > 0) {
                qe.push(temp);
            }
        }
        cout << qe.front().second;
    }
}