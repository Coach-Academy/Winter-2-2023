#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int q;
        cin >> q;
        priority_queue<int, vector<int>, greater<int>> pq;
        string s;
        int x;
        vector<pair<string, int>> ans;
        while (q--) {
            cin >> s;
            if (s[0] == 'i') {
                cin >> x;
                ans.push_back({s, x});
                pq.push(x);
            } else if (s[0] == 'g') {
                // 1 1
                // 1 1 3
                cin >> x;
                while (!pq.empty() && pq.top() < x) {
                    ans.push_back({"removeMin", -1});
                    pq.pop();
                }
                if (pq.empty() || pq.top() > x) {
                    ans.push_back({"insert", x});
                    pq.push(x);
                }

                ans.push_back({s, x});
            } else {

                if (pq.empty()) {
                    ans.push_back({"insert", 0});
                } else {
                    pq.pop();
                }
                ans.push_back({s, -1});
            }
        }
        cout << ans.size() << '\n';
        for (auto it: ans) {
            cout << it.first;
            if (it.first[0] != 'r')cout << ' ' << it.second;
            cout << '\n';
        }
    }
}