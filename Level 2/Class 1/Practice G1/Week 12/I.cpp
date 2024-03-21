#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        ll ans = 1e18;
        int idx1, idx2;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                // i , j
                ll temp = -1;
                for (int cnt = 0; cnt < n; cnt++) {
                    if (s1[cnt] == '0')continue;
                    if (i == 1) {
                        if (temp < abs(j - cnt)) {
                            temp = abs(j - cnt);
                        }
                    } else {
                        if (temp < j + cnt + k + 2) {
                            temp = j + cnt + k + 2;
                        }
                    }
                }
                for (int cnt = 0; cnt < n; cnt++) {
                    if (s2[cnt] == '0')continue;
                    if (i == 0) {
                        if (temp < abs(j - cnt)) {
                            temp = abs(j - cnt);
                        }
                    } else {
                        if (temp < j + cnt + k + 2) {
                            temp = j + cnt + k + 2;
                        }
                    }
                }
                if (ans > temp) {
                    ans = temp;
                    idx1 = i + 1;
                    idx2 = j + 1;
                }
            }
        }
        cout<<ans<<'\n'<<idx1<<" "<<idx2;
    }
}