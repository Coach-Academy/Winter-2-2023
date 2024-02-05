// TopCoders
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

void fast() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int mn = scores[0], mx = scores[0];
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        if (scores[i] < mn) {
            mn = scores[i];
            cnt++;
        }
        if (scores[i] > mx) {
            mx = scores[i];
            cnt++;
        }
    }
    cout << cnt;

}
