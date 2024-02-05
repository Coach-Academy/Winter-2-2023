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

    int contests;
    cin >> contests;
    int points[contests];

    for (int i = 0; i < contests; ++i) {
        cin >> points[i];
    }

    int mxScore = points[0];
    int mnScore = points[0];
    int cntAmazing = 0;

    for (int i = 1; i < contests; ++i) {
        if (points[i] > mxScore) {
            mxScore = points[i];
            cntAmazing++;
        }
        if (points[i] < mnScore) {
            mnScore = points[i];
            cntAmazing++;
        }
    }

    cout << cntAmazing;
}
