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

    int tasks, replaces, value;

    cin >> tasks >> replaces >> value;
    int arr[tasks];
    for (int i = 0; i < tasks; ++i) {
        cin >> arr[i];
    }

    reverse(arr, arr + tasks);
    for (int i = 0; i < replaces; ++i) {
        arr[i] = value;
    }
    int sum = 0;
    for (int i = 0; i < tasks; ++i) {
        sum += arr[i];
    }
    cout << sum;
}
