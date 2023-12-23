#include<bits/stdc++.h>

using namespace std;

int main() {

    int n , k;
    cin >> n >> k;
    int ans =0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        int cnt = 0;
        for (int j = 0; j <= k; ++j) {
            for (int l = 0; l < s.size(); ++l) {
                if (s[l] - '0' == j) {
                    cnt++;
                    break;
                }
            }
            if (cnt == k + 1)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}