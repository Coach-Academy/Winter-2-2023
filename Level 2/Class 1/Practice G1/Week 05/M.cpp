#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cassert>
using namespace std;

#define all(x) x.begin(), x.end()
#define pb push_back
#define sz(a) ((int) a.size())

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto& it : a) {
        cin >> it;
    }
    int sum = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (k > 1) {
            sum += a[i];
            if (sum % 2 != 0) {
                ans.push_back(i + 1);
                sum = 0;
                k--;
            }
        } else {
            sum += a[i];
        }

    }
    if (sum % 2 == 0 || k > 1) {
        cout << "NO\n";
        return;
    }
    ans.push_back(n);
    cout << "YES\n";
    for (auto x : ans)
        cout << x << " ";
    cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}