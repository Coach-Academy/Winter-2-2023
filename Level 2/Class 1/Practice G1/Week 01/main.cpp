#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int last = n - 1;
        vector<bool> vis(n + 1, 0);
        /// 2 1
        for (int search = n; search >= 1; search--) { //O(N)
            if (vis[search])continue;
            stack<int> sk;
            for (int i = last; i >= 0; i--) {
                sk.push(arr[i]);
                vis[arr[i]] = 1;
                if (arr[i] == search) {
                    while (!sk.empty()) {
                        cout << sk.top() << ' ';
                        sk.pop();
                    }
                    last = i - 1;
                    break;
                }
            }
        }
        cout << '\n';
    }
}