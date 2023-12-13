#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {

        // 1 2 3 1
        //
        map<int, int> fre, mp;
        int q, ch, num;
        cin >> q;
        while (q--) {
            cin >> ch >> num;
            if (ch == 1) {
                mp[fre[num]]--;
                fre[num]++;
                mp[fre[num]]++;
            } else if (ch == 2) {
                if (!fre[num])continue;
                mp[fre[num]]--;
                fre[num]--;
                mp[fre[num]]++;
            } else {
                if (mp[num])cout << 1 << '\n';
                else cout << 0 << '\n';
            }
        }
    }
}