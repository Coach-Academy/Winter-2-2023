#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fre[100005];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int yes = 1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (fre[arr[i]]) {
                yes = 0;
            }
            fre[arr[i]]++;
        }
        for (int i = 0; i < n; i++) {
            fre[arr[i]]--;
        }
        // zero
        if (yes)cout << "prekrasnyy" << '\n';
        else cout << "ne krasivo" << '\n';
    }
}