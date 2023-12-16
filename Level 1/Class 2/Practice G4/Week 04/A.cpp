#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int l , r;
    cin >> l >> r;
    l--,r--;
    for (int i = l; i <= r; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}