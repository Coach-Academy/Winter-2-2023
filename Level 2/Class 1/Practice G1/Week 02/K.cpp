#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        // 1 1 1 2 2 4 5 5
        // 3 2 1 2

        // 10 6  fre
        // 1 3

        map<int, int> fre, mp;
        int n, num;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            fre[num]++;
        }
        for (auto it: fre) {
            mp[-it.second]++;
        }
        ll ans = 0, cnt_last = 0;
        // mp (-fre) count of number
        for (auto it: mp) {

            cnt_last += it.second;
            //
            ans = max(ans, cnt_last * (-it.first));
        }
        cout << n - ans << '\n';
    }
}