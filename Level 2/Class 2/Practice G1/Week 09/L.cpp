#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int x =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        x ^= a[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << (x^a[i]) << " ";
    }
    cout << endl;
    return 0;
}