#include<bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n ;
    int a[n][n];
    a[0][0] = 1;
    int mx =1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ( i == 0 && j == 0)
                continue;
            a[i][j] = 0;
            if (i-1 >=0)
                a[i][j] += a[i-1][j];
            if ( j-1 >=0)
                a[i][j] += a[i][j-1];
            mx = max( mx , a[i][j]);
        }
    }
    cout << mx << endl;
    return 0;
}