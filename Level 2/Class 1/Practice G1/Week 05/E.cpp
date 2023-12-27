#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)cin >> a[i];
        for (int i = 0; i < 3; i++)cin >> b[i];
        cout << (a[0] > b[0]) + (a[1] > b[1]) + (a[2] > b[2]) << " ";
        cout << (a[0] < b[0]) + (a[1] < b[1]) + (a[2] < b[2]);
    }
}