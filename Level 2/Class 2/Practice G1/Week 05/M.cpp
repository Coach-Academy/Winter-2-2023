#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            cnt += arr[i] % 2;
        }
        if (k > cnt || (cnt - k) % 2)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < n; ++i) {
                if (arr[i] % 2 && k > 1)
                    cout << i + 1 << " ", k--;
            }
            cout << n << endl;
        }
    }

    return 0;
}