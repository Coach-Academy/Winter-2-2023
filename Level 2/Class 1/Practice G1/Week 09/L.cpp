#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        int xr = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            xr ^= arr[i];
        }
        // a1 ^ ^ a3
        for (int i = 0; i < n; i++) {
            cout << (xr ^ arr[i]) << ' ';
        }
    }
}