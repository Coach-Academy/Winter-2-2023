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

    int stations;
    cin >> stations;
    int exit, enter;
    int maxCapacity = 0;
    int passengers = 0;
    for (int i = 0; i < stations; ++i) {
        cin >> exit >> enter;
        passengers -= exit;
        passengers += enter;
        if (passengers > maxCapacity) {
            maxCapacity = passengers;
        }
    }

    cout << maxCapacity;

}
