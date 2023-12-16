#include<bits/stdc++.h>


using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n], mn =0 , mx =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        if ( a[mn] >= a[i])
            mn = i;
        if ( a[mx] < a[i])
            mx = i;
    }
    int moves = mx + (n-1 - mn);
    if ( mx > mn)
        moves--;
    cout << moves << endl;

    return 0;
}