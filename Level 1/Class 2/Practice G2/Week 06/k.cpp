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
    int arr[n + 1];
    int mx = INT_MIN;
    int mxIdx = INT_MIN;
    int mn = INT_MAX;
    int mnIdx = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        if (arr[i] > mx) {
            mxIdx = i;
            mx = arr[i];
        }
        if (arr[i] <= mn) {
            mnIdx = i;
            mn = arr[i];
        }
    }
    int swaps = 0;
    if (mxIdx != 1 || mnIdx != n) {
        swaps += mxIdx - 1;
        swaps += n - mnIdx;
    }
    if (mxIdx > mnIdx) {
        swaps--;
    }
    cout << swaps;

}
