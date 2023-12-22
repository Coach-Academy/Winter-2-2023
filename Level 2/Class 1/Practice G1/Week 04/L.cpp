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
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int l = 0, r = n - 1;
        //     L R
        // 1 2 2 3 5

        // 1 5 2 3 2
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                cout<<arr[r]<<' ';
                r--;
            }
            else{
                cout<<arr[l]<<' ';
                l++;
            }
        }
    }
}