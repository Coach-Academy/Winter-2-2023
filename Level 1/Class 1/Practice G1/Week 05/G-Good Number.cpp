#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cnt = 0;
    char k;
    cin >> n >> k;
    while (n--) {
        string s;
        cin >> s;
        int cnt1 = 0;
        for (char i = '0'; i <= k; ++i) {
            if (s.find(i) != string::npos)
                cnt1++;
        }
        if (cnt1 == (k - '0') + 1)
            cnt++;
    }
    cout << cnt;
}