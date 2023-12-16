#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+5];
    for (int i = 0; i < n+5; ++i) {
        a[i] = 0;
    }
    for (int i = 1; i <= n ; ++i) {
        cin >> a[i];
    }
    int m ;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int wire , bird ;
        cin >> wire >> bird;
        int left = bird -1;
        int right = a[wire] - bird;
        a[wire-1] += left;
        a[wire+1] += right;
        a[wire]  = 0;
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << endl;
    }

    return 0;
}