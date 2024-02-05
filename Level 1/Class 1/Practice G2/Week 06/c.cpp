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
    int arr[n];
    bool isFound = false;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] == 1) {
            isFound = true;
        }
    }
    cout << (isFound ? "-1" : "1");
}
