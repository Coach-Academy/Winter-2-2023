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

    string before, after;
    cin >> before >> after;
    reverse(after.begin(), after.end());
    bool equals = true;
    for (int i = 0; i < after.size(); ++i) {
        if (after[i] != before[i]) {
            equals = false;
            break;
        }
    }

    cout << (equals ? "YES" : "NO");



}
