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

    int arr[4];
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    int cnt = 0;
    sort(arr, arr + 4);
    for (int i = 0; i < 3; ++i) {
        if (arr[i] == arr[i + 1]) {
            cnt++;
        }
    }
    cout << cnt;

}
