#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (x == a || x == 7 - a || x == b || x == 7 - b) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}