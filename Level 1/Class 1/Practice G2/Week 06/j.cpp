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
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    int perm1[n], perm2[n];
    for (int i = 0; i < n; ++i) {
        cin >> perm1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> perm2[i];
    }
    int firstPos, secondPos;
    int curPerm = 1;
    do {
        bool isEqual = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != perm1[i]) {
                isEqual = false;
                break;
            }
        }
        if (isEqual) {
            firstPos = curPerm;
        }
        isEqual = true;
        for (int i = 0; i < n; ++i) {
            if (arr[i] != perm2[i]) {
                isEqual = false;
                break;
            }
        }
        if (isEqual) {
            secondPos = curPerm;
        }
        curPerm++;
    } while (next_permutation(arr, arr + n));
    cout << abs(firstPos - secondPos);
}
